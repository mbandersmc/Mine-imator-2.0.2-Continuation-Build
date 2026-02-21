/// popup_importimage_draw()

function popup_importimage_draw()
{
	// Preview
	var boxsize, boxx, boxy;
	var texwid, texhei, previewx, previewy;
	var previewwid, previewhei, scale;
	boxsize = 256
	boxx = floor((content_x - (dx - content_x)) + content_width - boxsize)
	boxy = dy
	texwid = texture_width(popup.texture)
	texhei = texture_height(popup.texture)
	scale = max(texwid / boxsize, texhei / boxsize)
	previewwid = texwid / scale
	previewhei = texhei / scale
	previewx = boxx + ((boxsize / 2) - (previewwid / 2))
	previewy = boxy + ((boxsize / 2) - (previewhei / 2))
	
	draw_box(boxx, boxy, boxsize, boxsize, false, c_level_middle, 1)
	draw_box(previewx, previewy, previewwid, previewhei, false, c_level_bottom, 1)
	draw_texture(popup.texture, previewx, previewy, 1 / scale, 1 / scale)
	
	// Info
	draw_label(text_get("importimagetype") + ":", dx, dy + 14, fa_left, fa_bottom, c_text_secondary, a_text_secondary, font_label)
	dy += 28
	
	tab_control_checkbox()
	draw_radiobutton("importimageskin", dx, dy, e_res_type.SKIN, popup.type = e_res_type.SKIN, action_toolbar_importimage_type)
	tab_next()
	
	tab_control_checkbox()
	draw_radiobutton("importimageitemsheet", dx, dy, e_res_type.ITEM_SHEET, popup.type = e_res_type.ITEM_SHEET, action_toolbar_importimage_type)
	tab_next()
	
	tab_control_checkbox()
	draw_radiobutton("importimageblocksheet", dx, dy, e_res_type.BLOCK_SHEET, popup.type = e_res_type.BLOCK_SHEET, action_toolbar_importimage_type)
	tab_next()
	
	tab_control_checkbox()
	draw_radiobutton("importimageparticlesheet", dx, dy, e_res_type.PARTICLE_SHEET, popup.type = e_res_type.PARTICLE_SHEET, action_toolbar_importimage_type)
	tab_next()
	
	tab_control_checkbox()
	draw_radiobutton("importimagetexture", dx, dy, e_res_type.TEXTURE, popup.type = e_res_type.TEXTURE, action_toolbar_importimage_type)
	tab_next()
	
	tab_control(setting_interface_compact ? 100 : 80)
	tab_next(false)
	
	// Ok
	tab_control_button_label()
	if (draw_button_label("importimageok", dx + dw, dy, null, null, e_button.PRIMARY, null, e_anchor.RIGHT))
	{
		if (popup.type = e_res_type.ITEM_SHEET)
			popup_importitemsheet_show(popup.filename, null)
		else
		{
			action_res_image_load(popup.filename, popup.type)
			popup_close()
		}
	}
	tab_next()
}
