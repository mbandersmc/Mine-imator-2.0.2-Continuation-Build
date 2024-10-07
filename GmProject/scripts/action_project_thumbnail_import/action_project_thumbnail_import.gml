/// action_project_thumbnail_import()

function action_project_thumbnail_import()
{
	var fn = file_dialog_open_image();
	if (fn = "")
		return 0
	
	project_thumbnail_image = texture_create(fn)
	project_custom_thumbnail = true
}
