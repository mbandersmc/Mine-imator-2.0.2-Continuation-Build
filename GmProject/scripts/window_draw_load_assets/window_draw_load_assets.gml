/// window_draw_load_assets()

function window_draw_load_assets()
{
	if (!minecraft_assets_load())
	{
		error("errorloadassets")
		game_end()
		return 0
	}
	
	// Background
	draw_clear(c_level_top)
	
	if (load_assets_stage = "done")
	{
		load_assets_stage = "exit"
		return 0
	}
	else if (load_assets_stage = "exit")
	{
		window_state = "startup"
		app_startup_interface()
		
		// Deactivate instances for better performance
		instance_deactivate_object(obj_deactivate)
		
		return 0
	}
	
	var screenwid, screenhei, splashwid;
	screenwid = 740
	screenhei = 450
	splashwid = 550
	
	var xoff, yoff;
	xoff = floor((window_width/2) - (screenwid/2))
	yoff = floor((window_height/2) - (screenhei/2))
	
	content_x = 28
	content_y = 28
	content_width = window_width - 56
	content_height = window_height - 56
	
	draw_dropshadow(xoff, yoff, screenwid, screenhei, c_accent, 1)
	draw_box(xoff, yoff, screenwid, screenhei, false, c_level_middle, 1)
	
	// Pattern
	var pattern = (setting_theme = theme_light ? 0 : 1);
	draw_sprite_ext(spr_pattern_left, pattern, xoff, yoff, 138 / sprite_get_width(spr_pattern_left), screenhei / sprite_get_height(spr_pattern_left), 0, c_white, 1)
	
	draw_sprite(spr_load_assets, 0, xoff + 95, yoff + 207)
	
	draw_label("Mine-imator " + string(mineimator_version), xoff + 95, yoff + 289, fa_middle, fa_bottom, c_text_secondary, a_text_secondary, font_heading)
	draw_label(string(string_upper(mineimator_version_sub)), xoff + 95, yoff + 289 + 12, fa_middle, fa_bottom, c_text_secondary, a_text_secondary, font_subheading)
	draw_label(string(string_upper(mineimator_version_extra)), xoff + 95, yoff + 289 + (mineimator_version_sub = "" ? 16 : 26), fa_middle, fa_bottom, c_text_tertiary, a_text_tertiary, font_subheading)
	draw_label(text_get("startuploadingassets", app.setting_minecraft_assets_version, floor(load_assets_progress * 100)), xoff + 95, yoff + 437, fa_middle, fa_bottom, c_text_tertiary, a_text_tertiary, font_caption)
	
	draw_gradient(xoff + 190, yoff, shadow_size * 2, screenhei, c_black, shadow_alpha * 2, 0, 0, shadow_alpha * 2)
	draw_gradient(xoff + 190, yoff, screenwid - 190, shadow_size * 2, c_black, shadow_alpha * 2, shadow_alpha * 2, 0, 0)
	
	// Splash
	if (load_assets_splash != null)
	{
		var texwid, texhei;
		texwid = sprite_get_width(load_assets_splash)
		texhei = sprite_get_height(load_assets_splash)
		
		// Too big for screen, scale down
		var scale = 1
		if (texwid > splashwid || texhei > screenhei)
			scale = max(texwid / splashwid, texhei / screenhei)
		
		draw_sprite_ext(load_assets_splash, 0, xoff + 190 + ((splashwid / 2) - ((texwid / scale) / 2)), yoff + ((screenhei / 2) - ((texhei / scale) / 2)), 1 / scale, 1 / scale, 0, c_white, 1)
	}
	
	// Splash credits
	if (load_assets_credits != "")
		draw_label(text_get("startupsplashauthor", load_assets_credits), xoff + 95, yoff + 289 + 31, fa_middle, fa_top, c_text_tertiary, a_text_tertiary, font_caption)
	
	// Loading bar
	draw_box(xoff, yoff + screenhei - 8, screenwid, 8, false, c_level_top, .8)
	draw_box(xoff, yoff + screenhei - 8, screenwid * load_assets_progress, 8, false, c_accent, 1)
	
	draw_outline(xoff, yoff, screenwid, screenhei, 1, c_border, a_border, true)
	draw_dropshadow(xoff, yoff, screenwid, screenhei, c_black, 1)
	
	current_step++
}
