/// action_lib_shape_interior_radius(value, add)
/// @arg value
/// @arg add

function action_lib_shape_interior_radius(val, add)
{
	if (!history_undo && !history_redo)
		history_set_var(action_lib_shape_interior_radius, temp_edit.shape_interior_radius, temp_edit.shape_interior_radius * add + val, true)
	
	with (temp_edit)
	{
		shape_interior_radius = shape_interior_radius * add + val
		temp_update_shape()
	}
	
	lib_preview.update = true
}
