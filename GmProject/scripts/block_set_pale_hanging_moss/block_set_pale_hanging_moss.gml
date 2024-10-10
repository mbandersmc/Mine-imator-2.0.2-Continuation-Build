/// block_set_pale_hanging_moss()
/// @desc Turns off wind if there is no pale hanging moss above.

function block_set_pale_hanging_moss()
{
	if (!build_edge_zp)
	{
		var block = builder_get_block(build_pos_x, build_pos_y, build_pos_z + 1);
		if (block == null || block.type != "pale_hanging_moss")
			vertex_wave_zmax = block_pos_z + block_size
	}
	else
		vertex_wave_zmax = block_pos_z + block_size
	
	if ((builder_scenery && !builder_scenery_legacy) || block_get_state_id_value(block_current, block_state_id_current, "tip") = "false")
		return 0
	
	if (build_pos_z = 0)
		block_state_id_current = block_get_state_id(block_current, array("tip", "true"))
	else
		block_state_id_current = block_get_state_id(block_current, array("tip", "false"))
	
	return 0
}
