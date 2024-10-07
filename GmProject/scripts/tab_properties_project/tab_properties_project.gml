/// tab_properties_project()

function tab_properties_project()
{
	// Project name
	tab.project.tbx_name.text = project_name
	tab_control_textfield()
	if (draw_textfield("projectname", dx, dy, dw, 24, tab.project.tbx_name, null, "", "top"))
	{
		project_changed = true
		project_name = tab.project.tbx_name.text
	}
	tab_next()
	
	// Project author
	tab.project.tbx_author.text = project_author
	tab_control_textfield()
	if (draw_textfield("projectauthor", dx, dy, dw, 24, tab.project.tbx_author, null, "", "top"))
	{
		project_changed = true
		project_author = tab.project.tbx_author.text
	}
	tab_next()
	
	// Project description
	tab.project.tbx_description.text = project_description
	tab_control_textfield(true, 76)
	if (draw_textfield("projectdescription", dx, dy, dw, 76, tab.project.tbx_description, null, "", "top"))
	{
		project_changed = true
		project_description = tab.project.tbx_description.text
	}
	tab_next()
	
	// Custom thumbnail
	if (setting_advanced_mode)
	{
		// Image
		tab_control(32)
		draw_label(text_get("projectthumbnail"), dx, dy + 16, fa_left, fa_middle, c_text_secondary, a_text_secondary, font_label) 
		
		if (draw_button_icon("projectthumbnailimport", dx + dw - (24 + 4 + 24), dy, 24, 24, false, icons.ASSET_IMPORT, null, false, "tooltipimportthumbnailimage"))
			action_project_thumbnail_import()
		if (draw_button_icon("projectthumbnailreset", dx + dw - 24, dy, 24, 24, false, icons.RESET, null, !project_custom_thumbnail, "tooltipresetthumbnailimage"))
			action_project_thumbnail_reset()
		
		tab_next(false)
		
		tab_control(180)
		draw_box(dx, dy, dw, 180, false, c_level_bottom, 1)
		
		if (sprite_exists(project_thumbnail_image))
		{
			// Scale down to fit
			var thumbwid, thumbhei, thumbsca;
			thumbwid = sprite_get_width(project_thumbnail_image)
			thumbhei = sprite_get_height(project_thumbnail_image)
			thumbsca = max(1, thumbwid / dw, thumbhei / 180)
		
			draw_sprite_ext(project_thumbnail_image, 0,  dx + ((dw / 2) - ((thumbwid / thumbsca) / 2)), dy + ((180 / 2) - ((thumbhei / thumbsca) / 2)), 1 / thumbsca, 1 / thumbsca, 0, c_white, 1)
		}
		tab_next()
	}
	
	// Project location
	var directory = "../" + directory_name(project_folder) + filename_name(filename_dir(project_file));
	
	tab_control(40)
	draw_label_value(dx, dy, dw - 28, 40, text_get("newprojectlocation"), directory, true)
	if (draw_button_icon("newprojectchangefolder", dx + dw - 24, dy + 8, 24, 24, false, icons.FOLDER, null, false, "tooltipopenfolder"))
		action_toolbar_open_folder()
	tab_next()
	
	// Video size
	if (project_video_template = 0)
		text = text_get("projectvideosizecustom")
	else
		text = text_get("projectvideosizetemplate" + project_video_template.name) + " (" + string(project_video_template.width) + "x" + string(project_video_template.height) + ")"
	
	tab_control_menu()
	draw_button_menu("projectvideosize", e_menu.LIST, dx, dy, dw, 24, project_video_template, text, action_project_video_template)
	tab_next()
	
	// Custom size
	if (project_video_template = 0)
	{
		textfield_group_add("projectvideosizecustomwidth", project_video_width, 1280, action_project_video_width, X, tab.project.tbx_video_size_custom_width, null, 1, 1, surface_get_max_size())
		textfield_group_add("projectvideosizecustomheight", project_video_height, 720, action_project_video_height, X, tab.project.tbx_video_size_custom_height, null, 1, 1, surface_get_max_size())
		
		tab_control_textfield_group(false)
		draw_textfield_group("projectvideosizecustom", dx, dy, dw, 1, 1, no_limit, 1, false)
		tab_next()
		
		tab_control_switch()
		draw_switch("projectvideosizecustomkeepaspectratio", dx, dy, project_video_keep_aspect_ratio, action_project_video_keep_aspect_ratio)
		tab_next()
		
		dy += 8
	}
	
	// Tempo
	tab_control_meter()
	draw_meter("projecttempo", dx, dy, dw, project_tempo, 1, 120, 24, 1, tab.project.tbx_tempo, action_project_tempo, "projecttempotip")
	tab_next()
}
