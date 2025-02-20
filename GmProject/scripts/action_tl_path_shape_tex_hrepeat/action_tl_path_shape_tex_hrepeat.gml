/// action_tl_path_shape_tex_hrepeat(value, add)
/// @arg value
/// @arg add

function action_tl_path_shape_tex_hrepeat(val, add)
{
	if (history_undo)
	{
		with (history_data)
		{
			for (var t = 0; t < save_var_amount; t++)
			{
				with (save_id_find(save_var_save_id[t]))
				{
					id.path_shape_tex_hrepeat = other.save_var_old_value[t]
					path_update = true
				}
			}
		}
	}
	else if (history_redo)
	{
		with (history_data)
		{
			for (var t = 0; t < save_var_amount; t++)
			{
				with (save_id_find(save_var_save_id[t]))
				{
					id.path_shape_tex_hrepeat = other.save_var_new_value[t]
					path_update = true
				}
			}
		}
	}
	else
	{
		var hobj = history_save_var_start(action_tl_path_shape_tex_hrepeat, true);
		
		with (obj_timeline)
		{
			if (!selected)
				continue
			
			with (hobj)
				history_save_var(other.id, other.path_shape_tex_hrepeat, other.path_shape_tex_hrepeat * add + val)
			
			id.path_shape_tex_hrepeat = id.path_shape_tex_hrepeat * add + val
			path_update = true
		}
	}
}
