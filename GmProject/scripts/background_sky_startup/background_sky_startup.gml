/// background_sky_startup()

function background_sky_startup()
{
	background_image_sphere_vbuffer = null
	background_image_cube_vbuffer = null
	background_image_cube_mapped_vbuffer = null
	
	var fogsurfw, fogsurfh;
	fogsurfw = 1;
	fogsurfh = 2048;
	var fogsurf = surface_create(fogsurfw, fogsurfh)
	surface_set_target(fogsurf)
	{
		var fogy, fogh;
		fogy = 0.3984375
		fogh = 0.078125
		
		draw_clear_alpha(c_white, 0)
		gpu_set_blendmode_ext(bm_one, bm_src_alpha)
		
		draw_image(spr_fog, 0, 0, fogsurfh * fogy, (fogsurfw / sprite_get_width(spr_fog)), fogh * (fogsurfh / sprite_get_height(spr_fog)))
		draw_box(0, fogsurfh * (fogy + fogh), fogsurfw, fogsurfh * (1 - (fogy + fogh)), false, c_white, 1)
		gpu_set_blendmode(bm_normal)
	}
	surface_reset_target()
	
	background_fog_texture = texture_surface(fogsurf)
	background_fog_vbuffer = null
	
	background_sky_stars_texture = texture_sprite(spr_stars)
	background_sky_stars_vbuffer = null
	background_sky_sun_moon_vbuffer = null
	background_sky_clouds_vbuffer = null
	background_sky_clouds_vbuffer_pos = []
}
