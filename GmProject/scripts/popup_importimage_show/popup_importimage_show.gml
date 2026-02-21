/// popup_importimage_show(filename)
/// @arg filename

function popup_importimage_show(fn, script = null)
{
	with (popup_importimage)
	{
		if (texture != null)
			texture_free(texture)
		
		filename = fn;
		value_script = script
		texture = texture_create(filename)
	}
	
	popup_show(popup_importimage)
}
