/// action_lib_pc_type_angle_random_max(value, add)
/// @arg value
/// @arg add

function action_lib_pc_type_angle_random_max(val, add)
{
	if (!history_undo && !history_redo)
		history_set_var(action_lib_pc_type_angle_random_max, ptype_edit.angle_random_max[axis_edit], ptype_edit.angle_random_max[axis_edit] * add + val, true)
	
	ptype_edit.angle_random_max[axis_edit] = ptype_edit.angle_random_max[axis_edit] * add + val
}
