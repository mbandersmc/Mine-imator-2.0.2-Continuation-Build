/// builder_set_model([ongeneration])
/// @arg [ongeneration]
/// @desc Sets the render model of the current block.

block_current = array3D_get(block_obj, build_size_z, build_pos_x, build_pos_y, build_pos_z);
if (block_current = null)
	return 0
	
block_state_id_current = array3D_get(block_state_id, build_size_z, build_pos_x, build_pos_y, build_pos_z);
	
var model = null;

// Run a block-specific script that sets the state and returns 0,
// or returns a render model/array of render models to use.
if (block_current.set_script > -1 && (!block_current.require_models || (argument_count > 0 && argument[0])))
{
	build_pos = point3D(build_pos_x, build_pos_y, build_pos_z)
	build_edge[e_dir.EAST]	= (build_pos_x = build_size_x - 1)
	build_edge[e_dir.WEST]	= (build_pos_x = 0)
	build_edge[e_dir.SOUTH] = (build_pos_y = build_size_y - 1)
	build_edge[e_dir.NORTH] = (build_pos_y = 0)
	build_edge[e_dir.UP]	= (build_pos_z = build_size_z - 1)
	build_edge[e_dir.DOWN]	= (build_pos_z = 0)
					
	var ret = script_execute(block_current.set_script);
	if (ret != 0)
		model = ret
}
		
// Has timeline
if (block_current.timeline && block_tl_list != null)
{
	//block_pos = point3D_mul(build_pos, block_size)
	//ds_list_add(block_tl_list, block_get_timeline(block_current, block_state_id_current))
}
else
{
	// Look for the render model of the current state
	if (model = null && block_current.state_id_model_obj != null)
	{
		var modelobj = block_current.state_id_model_obj[block_state_id_current];
		if (modelobj != null)
		{
			var brightness = block_current.state_id_brightness[block_state_id_current];
			
			// Multipart
			if (is_array(modelobj))
			{
				model = array()
				for (var i = 0; i < array_length_1d(modelobj); i++)
					array_add(model, block_get_render_model(modelobj[i], brightness))
			}
			// Single model
			else 
				model = block_get_render_model(modelobj, brightness)
		}
	}
		
	// Set model
	if (model != null)
		array3D_set(block_render_model, build_size_z, build_pos_x, build_pos_y, build_pos_z, model)
}