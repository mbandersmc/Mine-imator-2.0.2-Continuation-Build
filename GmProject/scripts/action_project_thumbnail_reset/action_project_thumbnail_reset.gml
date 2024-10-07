/// action_project_thumbnail_reset()

function action_project_thumbnail_reset()
{
	// Create thumbnail from work camera
	var surf = null;
	render_start(surf, null, recent_thumbnail_width, recent_thumbnail_height)
	render_low()
	surf = render_done()
	project_thumbnail_image = texture_surface(surf)
	surface_free(surf)
	
	project_custom_thumbnail = false
}