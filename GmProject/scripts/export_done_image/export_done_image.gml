/// export_done_image()

function export_done_image()
{
	render_free()
	
	surface_free(export_surface)
	export_surface = null
	window_state = ""
	
	render_watermark = false
	render_background = true
	render_hidden = false
	
	var export_folder = string_delete(export_filename, string_last_pos("/", string_replace_all(export_filename, "\\", "/")), string_length(export_filename) - string_last_pos("/", string_replace_all(export_filename, "\\", "/")) + 1)

	toast_new(e_toast.POSITIVE, text_get("alertexportimage"))
	toast_add_action("alertexportimageview", popup_open_url, export_filename)
	toast_add_action("alertexportimagefolder", popup_open_url, export_folder)
	toast_last.dismiss_time = 10
}