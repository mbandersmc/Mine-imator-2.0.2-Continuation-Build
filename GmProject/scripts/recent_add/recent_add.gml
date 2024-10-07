/// recent_add()
/// @desc Adds the opened project to the top of the recent list.

function recent_add()
{
	// Find project in list
	var obj = null;
	for (var i = 0; i < ds_list_size(recent_list); i++)
	{
		with (recent_list[|i])
		{
			if (filename != app.project_file)
				break
			
			obj = id
			ds_list_delete_value(app.recent_list, id)
			if (thumbnail != null)
				texture_free(thumbnail)
		}
		
		if (obj != null)
			break
	}
	
	// Save thumbnail
	var thumbnailfn = project_folder + "/thumbnail.png";
	if (project_custom_thumbnail)
	{
		if (recent_add_wait = 2 && sprite_exists(project_thumbnail_image))
			sprite_save_lib(project_thumbnail_image, 0, thumbnailfn)
		else if (!file_exists_lib(thumbnailfn))
			sprite_save_lib(spr_missing_thumbnail, 0, thumbnailfn)
	}
	else
	{
		if (recent_add_wait = 2 || !file_exists_lib(thumbnailfn))
		{
			// Create thumbnail from work camera
			var surf = null;
			render_start(surf, null, recent_thumbnail_width, recent_thumbnail_height)
			render_low()
			surf = render_done()
			surface_save_lib(surf, thumbnailfn)
			surface_free(surf)
		}
	}
	texture_free(project_thumbnail_image)
	project_thumbnail_image = texture_create(thumbnailfn)
	recent_add_wait = 0
	
	// Project not added, create new object
	if (obj = null)
		obj = new_obj(obj_recent)
	
	// Store data
	with (obj)
	{
		name = app.project_name
		author = app.project_author
		description = app.project_description
		thumbnail = app.project_thumbnail_image
		
		filename = app.project_file
		last_opened = date_current_datetime()
		pinned = false
		ds_list_insert(app.recent_list, 0, id)
	}
	
	recent_update()
	recent_save()
}
