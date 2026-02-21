/// action_lib_shape_ring_detail(value, add)
/// @arg value
/// @arg add

function action_lib_shape_ring_detail(val, add)
{
	if (!history_undo && !history_redo)
		history_set_var(action_lib_shape_ring_detail, temp_edit.shape_ring_detail, temp_edit.shape_ring_detail * add + val, true)
	
	with (temp_edit)
	{
		shape_ring_detail = shape_ring_detail * add + val
		temp_update_shape()
	}
	
	lib_preview.update = true
}
