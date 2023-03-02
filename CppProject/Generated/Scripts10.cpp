/*
	NOTE:
	This file was autogenerated by CppGen, changes may be overwritten and forever lost!
	Modify at your own risk!
	
	[ Generated on 2023.03.01 09:08:58 ]
*/

#include "Scripts.hpp"

namespace CppProject
{
	void action_tl_frame_force(ScopeAny self, VarType val, VarType add)
	{
		tl_value_set_start(self, ID_action_tl_frame_force, true);
		tl_value_set(self, { e_value_FORCE, val, add });
		tl_value_set_done();
	}
	
	void action_tl_frame_force_directional(ScopeAny self, VarType val, VarType add)
	{
		tl_value_set_start(self, ID_action_tl_frame_force_directional, true);
		tl_value_set(self, { e_value_FORCE_DIRECTIONAL, val, add });
		tl_value_set_done();
	}
	
	void action_tl_frame_force_vortex(ScopeAny self, VarType val, VarType add)
	{
		tl_value_set_start(self, ID_action_tl_frame_force_vortex, true);
		tl_value_set(self, { e_value_FORCE_VORTEX, val, add });
		tl_value_set_done();
	}
	
	void action_tl_frame_freeze(ScopeAny self, VarType freeze)
	{
		tl_value_set_start(self, ID_action_tl_frame_freeze, false);
		tl_value_set(self, { e_value_FREEZE, freeze, false });
		tl_value_set_done();
	}
	
	void action_tl_frame_glow_color(ScopeAny self, VarType color)
	{
		tl_value_set_start(self, ID_action_tl_frame_glow_color, true);
		tl_value_set(self, { e_value_GLOW_COLOR, color, false });
		tl_value_set_done();
	}
	
	void action_tl_frame_hsb_add(ScopeAny self, VarType color)
	{
		tl_value_set_start(self, ID_action_tl_frame_hsb_add, true);
		tl_value_set(self, { e_value_HSB_ADD, color, false });
		tl_value_set_done();
	}
	
	void action_tl_frame_hsb_mul(ScopeAny self, VarType color)
	{
		tl_value_set_start(self, ID_action_tl_frame_hsb_mul, true);
		tl_value_set(self, { e_value_HSB_MUL, color, false });
		tl_value_set_done();
	}
	
	void action_tl_frame_hsb_sub(ScopeAny self, VarType color)
	{
		tl_value_set_start(self, ID_action_tl_frame_hsb_sub, true);
		tl_value_set(self, { e_value_HSB_SUB, color, false });
		tl_value_set_done();
	}
	
	void action_tl_frame_ik_angle_offset(ScopeAny self, VarType val, VarType add)
	{
		tl_value_set_start(self, ID_action_tl_frame_ik_angle_offset, true);
		tl_value_set(self, { e_value_IK_ANGLE_OFFSET, val, add });
		tl_value_set_done();
	}
	
	void action_tl_frame_ik_blend(ScopeAny self, RealType val, VarType add)
	{
		tl_value_set_start(self, ID_action_tl_frame_ik_blend, true);
		tl_value_set(self, { e_value_IK_BLEND, val / 100.0, add });
		tl_value_set_done();
	}
	
	void action_tl_frame_ik_target(ScopeAny self, VarType target)
	{
		tl_value_set_start(self, ID_action_tl_frame_ik_target, false);
		tl_value_set(self, { e_value_IK_TARGET, target, false });
		tl_value_set_done();
	}
	
	void action_tl_frame_ik_target_angle(ScopeAny self, VarType target)
	{
		tl_value_set_start(self, ID_action_tl_frame_ik_target_angle, false);
		tl_value_set(self, { e_value_IK_TARGET_ANGLE, target, false });
		tl_value_set_done();
	}
	
	void action_tl_frame_item_slot(ScopeAny self, VarType slot, BoolType add)
	{
		if (add == VarType())
			add = false;
		tl_value_set_start(self, ID_action_tl_frame_item_slot, true);
		tl_value_set(self, { e_value_ITEM_SLOT, slot, add });
		tl_value_set_done();
	}
	
	void action_tl_frame_light_color(ScopeAny self, VarType color)
	{
		tl_value_set_start(self, ID_action_tl_frame_light_color, true);
		tl_value_set(self, { e_value_LIGHT_COLOR, color, false });
		tl_value_set_done();
	}
	
	void action_tl_frame_light_fade_size(ScopeAny self, RealType val, VarType add)
	{
		tl_value_set_start(self, ID_action_tl_frame_light_fade_size, true);
		tl_value_set(self, { e_value_LIGHT_FADE_SIZE, val / 100.0, add });
		tl_value_set_done();
	}
	
	void action_tl_frame_light_range(ScopeAny self, VarType val, VarType add)
	{
		tl_value_set_start(self, ID_action_tl_frame_light_range, true);
		tl_value_set(self, { e_value_LIGHT_RANGE, val, add });
		tl_value_set_done();
	}
	
	void action_tl_frame_light_size(ScopeAny self, VarType val, VarType add)
	{
		tl_value_set_start(self, ID_action_tl_frame_light_size, true);
		tl_value_set(self, { e_value_LIGHT_SIZE, val, add });
		tl_value_set_done();
	}
	
	void action_tl_frame_light_specular_strength(ScopeAny self, RealType val, VarType add)
	{
		tl_value_set_start(self, ID_action_tl_frame_light_specular_strength, true);
		tl_value_set(self, { e_value_LIGHT_SPECULAR_STRENGTH, val / 100.0, add });
		tl_value_set_done();
	}
	
	void action_tl_frame_light_spot_radius(ScopeAny self, VarType val, VarType add)
	{
		tl_value_set_start(self, ID_action_tl_frame_light_spot_radius, true);
		tl_value_set(self, { e_value_LIGHT_SPOT_RADIUS, val, add });
		tl_value_set_done();
	}
	
	void action_tl_frame_light_spot_sharpness(ScopeAny self, RealType val, VarType add)
	{
		tl_value_set_start(self, ID_action_tl_frame_light_spot_sharpness, true);
		tl_value_set(self, { e_value_LIGHT_SPOT_SHARPNESS, val / 100.0, add });
		tl_value_set_done();
	}
	
	void action_tl_frame_light_strength(ScopeAny self, RealType val, VarType add)
	{
		tl_value_set_start(self, ID_action_tl_frame_light_strength, true);
		tl_value_set(self, { e_value_LIGHT_STRENGTH, val / 100.0, add });
		tl_value_set_done();
	}
	
	void action_tl_frame_look_at_rotate(ScopeAny self, VarType enable)
	{
		idBool(idVar(sVar(tab), camera), look_at_rotate) = enable;
	}
	
	void action_tl_frame_metallic(ScopeAny self, RealType val, VarType add)
	{
		tl_value_set_start(self, ID_action_tl_frame_metallic, true);
		tl_value_set(self, { e_value_METALLIC, val / 100.0, add });
		tl_value_set_done();
	}
	
	void action_tl_frame_mix_color(ScopeAny self, VarType color)
	{
		tl_value_set_start(self, ID_action_tl_frame_mix_color, true);
		tl_value_set(self, { e_value_MIX_COLOR, color, false });
		tl_value_set_done();
	}
	
	void action_tl_frame_mix_percent(ScopeAny self, RealType val, VarType add)
	{
		tl_value_set_start(self, ID_action_tl_frame_mix_percent, true);
		tl_value_set(self, { e_value_MIX_PERCENT, val / 100.0, add });
		tl_value_set_done();
	}
	
	void action_tl_frame_path(ScopeAny self, VarType path)
	{
		tl_value_set_start(self, ID_action_tl_frame_path, false);
		tl_value_set(self, { e_value_PATH_OBJ, path, false });
		tl_value_set_done();
	}
	
	void action_tl_frame_path_offset(ScopeAny self, VarType val, VarType add)
	{
		tl_value_set_start(self, ID_action_tl_frame_path_offset, true);
		tl_value_set(self, { e_value_PATH_OFFSET, val, add });
		tl_value_set_done();
	}
	
	void action_tl_frame_path_offset_set_length(ScopeAny self)
	{
		VarType path = idVar(global::tl_edit, value).Value(e_value_PATH_OBJ);
		tl_value_set_start(self, ID_action_tl_frame_path_offset_set_length, false);
		tl_value_set(self, { e_value_PATH_OFFSET, idReal(path, path_length), false });
		tl_value_set_done();
	}
	
	void action_tl_frame_path_point_angle(ScopeAny self, VarType val, VarType add)
	{
		tl_value_set_start(self, ID_action_tl_frame_path_point_angle, true);
		tl_value_set(self, { e_value_PATH_POINT_ANGLE, val, add });
		tl_value_set_done();
	}
	
	void action_tl_frame_path_point_scale(ScopeAny self, VarType val, VarType add)
	{
		tl_value_set_start(self, ID_action_tl_frame_path_point_scale, true);
		tl_value_set(self, { e_value_PATH_POINT_SCALE, val, add });
		tl_value_set_done();
	}
	
	void action_tl_frame_pos(ScopeAny self, VarType val, BoolType add)
	{
		tl_value_set_start(self, ID_action_tl_frame_pos, true);
		tl_value_set(self, { e_value_POS_X + global::axis_edit, val, add });
		tl_value_set_done();
	}
	
	void action_tl_frame_pos_xyz(ScopeAny self, VarType point)
	{
		tl_value_set_start(self, ID_action_tl_frame_pos_xyz, false);
		tl_value_set(self, { e_value_POS_X, point.Value(X_), false });
		tl_value_set(self, { e_value_POS_Y, point.Value(Y_), false });
		tl_value_set(self, { e_value_POS_Z, point.Value(Z_), false });
		tl_value_set_done();
	}
	
	void action_tl_frame_rgb_add(ScopeAny self, VarType color)
	{
		tl_value_set_start(self, ID_action_tl_frame_rgb_add, true);
		tl_value_set(self, { e_value_RGB_ADD, color, false });
		tl_value_set_done();
	}
	
	void action_tl_frame_rgb_mul(ScopeAny self, VarType color)
	{
		tl_value_set_start(self, ID_action_tl_frame_rgb_mul, true);
		tl_value_set(self, { e_value_RGB_MUL, color, false });
		tl_value_set_done();
	}
	
	void action_tl_frame_rgb_sub(ScopeAny self, VarType color)
	{
		tl_value_set_start(self, ID_action_tl_frame_rgb_sub, true);
		tl_value_set(self, { e_value_RGB_SUB, color, false });
		tl_value_set_done();
	}
	
	void action_tl_frame_rot(ScopeAny self, RealType val, BoolType add)
	{
		tl_value_set_start(self, ID_action_tl_frame_rot, true);
		tl_value_set(self, { e_value_ROT_X + global::axis_edit, val, add });
		tl_value_set_done();
	}
	
	void action_tl_frame_rot_xyz(ScopeAny self, VarType rotation)
	{
		tl_value_set_start(self, ID_action_tl_frame_rot_xyz, false);
		tl_value_set(self, { e_value_ROT_X, rotation.Value(X_), false });
		tl_value_set(self, { e_value_ROT_Y, rotation.Value(Y_), false });
		tl_value_set(self, { e_value_ROT_Z, rotation.Value(Z_), false });
		tl_value_set_done();
	}
	
	void action_tl_frame_roughness(ScopeAny self, RealType val, VarType add)
	{
		tl_value_set_start(self, ID_action_tl_frame_roughness, true);
		tl_value_set(self, { e_value_ROUGHNESS, val / 100.0, add });
		tl_value_set_done();
	}
	
	void action_tl_frame_scale(ScopeAny self, VarType val, BoolType add)
	{
		tl_value_set_start(self, ID_action_tl_frame_scale, true);
		tl_value_set(self, { e_value_SCA_X + global::axis_edit, val, add });
		tl_value_set_done();
	}
	
	void action_tl_frame_scale_all_axis(ScopeAny self, VarType val, BoolType add)
	{
		VarType oldval, historyobj;
		RealType mul;
		BoolType stopdrag;
		oldval = idVar(global::tl_edit, value).Value(e_value_SCA_X + global::axis_edit);
		historyobj = (sReal(history_pos) > IntType(0) || sReal(history_amount) == IntType(0) ? VarType(null_) : sArr(history).Value(IntType(0)));
		stopdrag = false;
		if (string_contains(sVar(window_busy), /*"drag"*/ STR(30)) || string_contains(sVar(window_busy), /*"rendercontrol"*/ STR(31)))
		{
			if (historyobj == null_ || !ObjType(obj_history, historyobj)->scale_link_drag)
			{
				tl_value_set_start(self, ID_action_tl_frame_scale_all_axis, false);
				ObjType(obj_history, global::history_data)->scale_link_drag = true;
				ObjType(obj_history, global::history_data)->scale_oldval = oldval;
				ObjType(obj_history, global::history_data)->scale_link_drag_val += val;
				mul = (RealType)(oldval + ObjType(obj_history, global::history_data)->scale_link_drag_val) / oldval;
			}
			else
			{
				tl_value_set_start(self, ID_action_tl_frame_scale_all_axis, true);
				oldval = ObjType(obj_history, global::history_data)->scale_oldval;
				ObjType(obj_history, global::history_data)->scale_link_drag_val += val;
				mul = (RealType)(oldval + ObjType(obj_history, global::history_data)->scale_link_drag_val) / oldval;
			}
			
		}
		else
			if (historyobj != null_ && ObjType(obj_history, historyobj)->scale_link_drag)
			{
				tl_value_set_start(self, ID_action_tl_frame_scale_all_axis, true);
				stopdrag = true;
				oldval = ObjType(obj_history, global::history_data)->scale_oldval;
				ObjType(obj_history, global::history_data)->scale_link_drag_val += val;
				mul = (RealType)(oldval + ObjType(obj_history, global::history_data)->scale_link_drag_val) / oldval;
			}
			else
			{
				tl_value_set_start(self, ID_action_tl_frame_scale_all_axis, true);
				mul = (RealType)val / oldval;
			}
		
		
		tl_value_set(self, { e_value_SCA_X, mul, false, true });
		tl_value_set(self, { e_value_SCA_Y, mul, false, true });
		tl_value_set(self, { e_value_SCA_Z, mul, false, true });
		tl_value_set_done();
		if (stopdrag)
			ObjType(obj_history, global::history_data)->scale_link_drag = false;
	}
	
	void action_tl_frame_scale_xyz(ScopeAny self, VarType value)
	{
		tl_value_set_start(self, ID_action_tl_frame_scale_xyz, false);
		tl_value_set(self, { e_value_SCA_X, value.Value(X_), false });
		tl_value_set(self, { e_value_SCA_Y, value.Value(Y_), false });
		tl_value_set(self, { e_value_SCA_Z, value.Value(Z_), false });
		tl_value_set_done();
	}
	
	void action_tl_frame_seed(ScopeAny self, VarType val, VarType add)
	{
		tl_value_set_start(self, ID_action_tl_frame_seed, true);
		tl_value_set(self, { e_value_SEED, val, add });
		tl_value_set_done();
	}
	
	void action_tl_frame_set_camera(ScopeAny self, VarArgs argument)
	{
		IntType argument_count = argument.Size();
		VarType valueslist, reset;
		valueslist = argument[IntType(0)];
		reset = false;
		if (argument_count > IntType(1))
			reset = argument[IntType(1)];
		tl_value_set_start(self, ID_action_tl_frame_set_camera, false);
		for (IntType i = IntType(0); i < ds_list_size(global::camera_values_list); i++)
		{
			VarType vid = DsList(global::camera_values_list).Value(i);
			if (reset > 0)
			{
				if (valueslist.Value(i) == null_)
					tl_value_set(self, { vid, null_, false });
				if (valueslist.Value(i) > 0)
					tl_value_set(self, { vid, tl_value_default(vid), false });
			}
			else
				tl_value_set(self, { vid, valueslist.Value(i), false });
			
		}
		tl_value_set_done();
	}
	
	void action_tl_frame_set_colors(ScopeAny self, VarType alpha, VarType rgbadd, VarType rgbsub, VarType rgbmul, VarType hsbadd, VarType hsbsub, VarType hsbmul, VarType glowcolor, VarType mixcolor, VarType mixpercent)
	{
		tl_value_set_start(self, ID_action_tl_frame_set_colors, false);
		tl_value_set(self, { e_value_ALPHA, alpha, false });
		tl_value_set(self, { e_value_RGB_ADD, rgbadd, false });
		tl_value_set(self, { e_value_RGB_SUB, rgbsub, false });
		tl_value_set(self, { e_value_RGB_MUL, rgbmul, false });
		tl_value_set(self, { e_value_HSB_ADD, hsbadd, false });
		tl_value_set(self, { e_value_HSB_SUB, hsbsub, false });
		tl_value_set(self, { e_value_HSB_MUL, hsbmul, false });
		tl_value_set(self, { e_value_GLOW_COLOR, glowcolor, false });
		tl_value_set(self, { e_value_MIX_COLOR, mixcolor, false });
		tl_value_set(self, { e_value_MIX_PERCENT, mixpercent, false });
		tl_value_set_done();
	}
	
	void action_tl_frame_set_light(ScopeAny self, VarType color, VarType strength, VarType specstrength, VarType size, VarType range, VarType fadesize, VarType spotradius, VarType spotsharpness)
	{
		tl_value_set_start(self, ID_action_tl_frame_set_light, false);
		tl_value_set(self, { e_value_LIGHT_COLOR, color, false });
		tl_value_set(self, { e_value_LIGHT_STRENGTH, strength, false });
		tl_value_set(self, { e_value_LIGHT_SPECULAR_STRENGTH, specstrength, false });
		tl_value_set(self, { e_value_LIGHT_SIZE, size, false });
		tl_value_set(self, { e_value_LIGHT_RANGE, range, false });
		tl_value_set(self, { e_value_LIGHT_FADE_SIZE, fadesize, false });
		tl_value_set(self, { e_value_LIGHT_SPOT_RADIUS, spotradius, false });
		tl_value_set(self, { e_value_LIGHT_SPOT_SHARPNESS, spotsharpness, false });
		tl_value_set_done();
	}
	
	void action_tl_frame_sound_end(ScopeAny self, VarType val, BoolType add)
	{
		tl_value_set_start(self, ID_action_tl_frame_sound_end, true);
		tl_value_set(self, { e_value_SOUND_END, val, add });
		tl_value_set_done();
		tl_update_length();
	}
	
	void action_tl_frame_sound_obj(ScopeAny self, VarType object)
	{
		tl_value_set_start(self, ID_action_tl_frame_sound_obj, false);
		tl_value_set(self, { e_value_SOUND_OBJ, object, false });
		tl_value_set_done();
		tl_update_length();
	}
	
	void action_tl_frame_sound_start(ScopeAny self, VarType val, VarType add)
	{
		tl_value_set_start(self, ID_action_tl_frame_sound_start, true);
		tl_value_set(self, { e_value_SOUND_START, val, add });
		tl_value_set_done();
		tl_update_length();
	}
	
	void action_tl_frame_sound_volume(ScopeAny self, RealType val, VarType add)
	{
		tl_value_set_start(self, ID_action_tl_frame_sound_volume, true);
		tl_value_set(self, { e_value_SOUND_VOLUME, val / 100.0, add });
		tl_value_set_done();
	}
	
	void action_tl_frame_spawn(ScopeAny self, VarType spawn)
	{
		tl_value_set_start(self, ID_action_tl_frame_spawn, false);
		tl_value_set(self, { e_value_SPAWN, spawn, false });
		tl_value_set_done();
	}
	
	void action_tl_frame_subsurface(ScopeAny self, VarType val, VarType add)
	{
		tl_value_set_start(self, ID_action_tl_frame_subsurface, true);
		tl_value_set(self, { e_value_SUBSURFACE, val, add });
		tl_value_set_done();
	}
	
	void action_tl_frame_subsurface_blue(ScopeAny self, RealType val, VarType add)
	{
		tl_value_set_start(self, ID_action_tl_frame_subsurface_blue, true);
		tl_value_set(self, { e_value_SUBSURFACE_RADIUS_BLUE, val / 100.0, add });
		tl_value_set_done();
	}
	
	void action_tl_frame_subsurface_color(ScopeAny self, VarType color)
	{
		tl_value_set_start(self, ID_action_tl_frame_subsurface_color, true);
		tl_value_set(self, { e_value_SUBSURFACE_COLOR, color, false });
		tl_value_set_done();
	}
	
	void action_tl_frame_subsurface_green(ScopeAny self, RealType val, VarType add)
	{
		tl_value_set_start(self, ID_action_tl_frame_subsurface_green, true);
		tl_value_set(self, { e_value_SUBSURFACE_RADIUS_GREEN, val / 100.0, add });
		tl_value_set_done();
	}
	
	void action_tl_frame_subsurface_red(ScopeAny self, RealType val, VarType add)
	{
		tl_value_set_start(self, ID_action_tl_frame_subsurface_red, true);
		tl_value_set(self, { e_value_SUBSURFACE_RADIUS_RED, val / 100.0, add });
		tl_value_set_done();
	}
	
	void action_tl_frame_text(ScopeAny self, VarType text)
	{
		tl_value_set_start(self, ID_action_tl_frame_text, true);
		tl_value_set(self, { e_value_TEXT, text, false });
		tl_value_set_done();
	}
	
	void action_tl_frame_texture_material_obj(ScopeAny self, VarType object)
	{
		tl_value_set_start(self, ID_action_tl_frame_texture_material_obj, false);
		tl_value_set(self, { e_value_TEXTURE_MATERIAL_OBJ, object, false });
		tl_value_set_done();
	}
	
	void action_tl_frame_texture_normal_obj(ScopeAny self, VarType object)
	{
		tl_value_set_start(self, ID_action_tl_frame_texture_normal_obj, false);
		tl_value_set(self, { e_value_TEXTURE_NORMAL_OBJ, object, false });
		tl_value_set_done();
	}
	
	void action_tl_frame_texture_obj(ScopeAny self, VarType object)
	{
		tl_value_set_start(self, ID_action_tl_frame_texture_obj, false);
		tl_value_set(self, { e_value_TEXTURE_OBJ, object, false });
		tl_value_set_done();
	}
	
	void action_tl_frame_text_aa(ScopeAny self, VarType enable)
	{
		tl_value_set_start(self, ID_action_tl_frame_text_aa, false);
		tl_value_set(self, { e_value_TEXT_AA, enable, false });
		tl_value_set_done();
	}
	
	void action_tl_frame_text_font(ScopeAny self, VarType object)
	{
		tl_value_set_start(self, ID_action_tl_frame_text_font, false);
		tl_value_set(self, { e_value_TEXT_FONT, object, false });
		tl_value_set_done();
	}
	
	void action_tl_frame_text_halign(ScopeAny self, VarType halign)
	{
		tl_value_set_start(self, ID_action_tl_frame_text_halign, true);
		tl_value_set(self, { e_value_TEXT_HALIGN, halign, false });
		tl_value_set_done();
	}
	
	void action_tl_frame_text_valign(ScopeAny self, VarType valign)
	{
		tl_value_set_start(self, ID_action_tl_frame_text_valign, true);
		tl_value_set(self, { e_value_TEXT_VALIGN, valign, false });
		tl_value_set_done();
	}
	
	void action_tl_frame_transition(ScopeAny self, VarType name)
	{
		tl_value_set_start(self, ID_action_tl_frame_transition, false);
		tl_value_set(self, { e_value_TRANSITION, name, false });
		tl_value_set_done();
	}
	
	void action_tl_frame_visible(ScopeAny self, VarType enable)
	{
		tl_value_set_start(self, ID_action_tl_frame_visible, false);
		tl_value_set(self, { e_value_VISIBLE, enable, false });
		tl_value_set_done();
	}
	
	void action_tl_frame_wind_influence(ScopeAny self, RealType val, VarType add)
	{
		tl_value_set_start(self, ID_action_tl_frame_wind_influence, true);
		tl_value_set(self, { e_value_WIND_INFLUENCE, val / 100.0, add });
		tl_value_set_done();
	}
	
	void action_tl_ghost(ScopeAny self, VarType timeline)
	{
		if (sReal(history_undo) > 0)
		{
			withOne (obj_history, global::history_data, self->id)
				for (IntType t = IntType(0); t < self->save_var_amount; t++)
					withOne (Object, save_id_find(self->save_var_save_id.Value(t)), self->id)
						sVar(ghost) = ObjType(obj_history, self.otherId)->save_var_old_value.Value(t);
			
			
		}
		else
			if (sReal(history_redo) > 0)
			{
				withOne (obj_history, global::history_data, self->id)
					for (IntType t = IntType(0); t < self->save_var_amount; t++)
						withOne (Object, save_id_find(self->save_var_save_id.Value(t)), self->id)
							sVar(ghost) = ObjType(obj_history, self.otherId)->save_var_new_value.Value(t);
				
				
			}
			else
			{
				VarType hobj = history_save_var_start(self, ID_action_tl_ghost, false);
				action_tl_ghost_tree(timeline, !(idVar(timeline, ghost) > 0), hobj);
			}
		
		
	}
	
	void action_tl_ghost_tree(VarType tl, BoolType nval, VarType hobj)
	{
		withOne (obj_history, hobj, noone)
			history_save_var(self, tl, idVar(tl, ghost), nval);
		
		idVar(tl, ghost) = nval;
		for (IntType i = IntType(0); i < ds_list_size(idInt(tl, tree_list)); i++)
			action_tl_ghost_tree(DsList(idInt(tl, tree_list)).Value(i), nval, hobj);
	}
	
	void action_tl_glow(ScopeAny self, VarType enable)
	{
		if (sReal(history_undo) > 0)
		{
			withOne (obj_history, global::history_data, self->id)
				for (IntType t = IntType(0); t < self->save_var_amount; t++)
					withOne (Object, save_id_find(self->save_var_save_id.Value(t)), self->id)
						sVar(glow) = ObjType(obj_history, self.otherId)->save_var_old_value.Value(t);
			
			
		}
		else
			if (sReal(history_redo) > 0)
			{
				withOne (obj_history, global::history_data, self->id)
					for (IntType t = IntType(0); t < self->save_var_amount; t++)
						withOne (Object, save_id_find(self->save_var_save_id.Value(t)), self->id)
							sVar(glow) = ObjType(obj_history, self.otherId)->save_var_new_value.Value(t);
				
				
			}
			else
			{
				VarType hobj = history_save_var_start(self, ID_action_tl_glow, false);
				withAll (obj_timeline, self->id)
					if (self->selected > 0)
						action_tl_glow_tree(self->id, enable, hobj);
				
			}
		
		
	}
	
	void action_tl_glow_texture(ScopeAny self, VarType enable)
	{
		if (sReal(history_undo) > 0)
		{
			withOne (obj_history, global::history_data, self->id)
				for (IntType t = IntType(0); t < self->save_var_amount; t++)
					withOne (Object, save_id_find(self->save_var_save_id.Value(t)), self->id)
						sVar(glow_texture) = ObjType(obj_history, self.otherId)->save_var_old_value.Value(t);
			
			
		}
		else
			if (sReal(history_redo) > 0)
			{
				withOne (obj_history, global::history_data, self->id)
					for (IntType t = IntType(0); t < self->save_var_amount; t++)
						withOne (Object, save_id_find(self->save_var_save_id.Value(t)), self->id)
							sVar(glow_texture) = ObjType(obj_history, self.otherId)->save_var_new_value.Value(t);
				
				
			}
			else
			{
				VarType hobj = history_save_var_start(self, ID_action_tl_glow_texture, false);
				withAll (obj_timeline, self->id)
					if (self->selected > 0)
						action_tl_glow_texture_tree(self->id, enable, hobj);
				
			}
		
		
	}
	
	void action_tl_glow_texture_tree(VarType tl, VarType nval, VarType hobj)
	{
		withOne (obj_history, hobj, noone)
			history_save_var(self, tl, ObjType(obj_timeline, tl)->glow_texture, nval);
		
		ObjType(obj_timeline, tl)->glow_texture = nval;
		for (IntType i = IntType(0); i < ds_list_size(ObjType(obj_timeline, tl)->tree_list); i++)
			if (!(ObjType(obj_timeline, DsList(ObjType(obj_timeline, tl)->tree_list).Value(i))->selected > 0))
				action_tl_glow_texture_tree(DsList(ObjType(obj_timeline, tl)->tree_list).Value(i), nval, hobj);
	}
	
	void action_tl_glow_tree(VarType tl, VarType nval, VarType hobj)
	{
		withOne (obj_history, hobj, noone)
			history_save_var(self, tl, ObjType(obj_timeline, tl)->glow, nval);
		
		ObjType(obj_timeline, tl)->glow = nval;
		for (IntType i = IntType(0); i < ds_list_size(ObjType(obj_timeline, tl)->tree_list); i++)
			if (!(ObjType(obj_timeline, DsList(ObjType(obj_timeline, tl)->tree_list).Value(i))->selected > 0))
				action_tl_glow_tree(DsList(ObjType(obj_timeline, tl)->tree_list).Value(i), nval, hobj);
	}
	
	void action_tl_hide(ScopeAny self, VarType timeline)
	{
		if (sReal(history_undo) > 0)
		{
			withOne (obj_history, global::history_data, self->id)
				for (IntType t = IntType(0); t < self->save_var_amount; t++)
					withOne (Object, save_id_find(self->save_var_save_id.Value(t)), self->id)
						sVar(hide) = ObjType(obj_history, self.otherId)->save_var_old_value.Value(t);
			
			
		}
		else
			if (sReal(history_redo) > 0)
			{
				withOne (obj_history, global::history_data, self->id)
					for (IntType t = IntType(0); t < self->save_var_amount; t++)
						withOne (Object, save_id_find(self->save_var_save_id.Value(t)), self->id)
							sVar(hide) = ObjType(obj_history, self.otherId)->save_var_new_value.Value(t);
				
				
			}
			else
			{
				VarType hobj = history_save_var_start(self, ID_action_tl_hide, false);
				action_tl_hide_tree(timeline, !(idVar(timeline, hide) > 0), hobj);
			}
		
		
	}
	
	void action_tl_hide_select(ScopeAny self, BoolType hide)
	{
		if (sReal(history_undo) > 0)
		{
			withOne (obj_history, global::history_data, self->id)
				for (IntType t = IntType(0); t < self->save_var_amount; t++)
					withOne (Object, save_id_find(self->save_var_save_id.Value(t)), self->id)
						idVar(self->id, hide) = ObjType(obj_history, self.otherId)->save_var_old_value.Value(t);
			
			
		}
		else
			if (sReal(history_redo) > 0)
			{
				withOne (obj_history, global::history_data, self->id)
					for (IntType t = IntType(0); t < self->save_var_amount; t++)
						withOne (Object, save_id_find(self->save_var_save_id.Value(t)), self->id)
							idVar(self->id, hide) = ObjType(obj_history, self.otherId)->save_var_new_value.Value(t);
				
				
			}
			else
			{
				VarType hobj = history_save_var_start(self, ID_action_tl_hide_select, false);
				withAll (obj_timeline, self->id)
				{
					if (!(self->selected > 0))
						continue;
					action_tl_hide_tree(self->id, hide, hobj);
				}
				
			}
		
		
	}
	
	void action_tl_hide_tree(VarType tl, BoolType nval, VarType hobj)
	{
		withOne (obj_history, hobj, noone)
			history_save_var(self, tl, idVar(tl, hide), nval);
		
		idVar(tl, hide) = nval;
		for (IntType i = IntType(0); i < ds_list_size(idInt(tl, tree_list)); i++)
			action_tl_hide_tree(DsList(idInt(tl, tree_list)).Value(i), nval, hobj);
	}
	
	void action_tl_hq_hiding(ScopeAny self, VarType enable)
	{
		if (sReal(history_undo) > 0)
		{
			withOne (obj_history, global::history_data, self->id)
				for (IntType t = IntType(0); t < self->save_var_amount; t++)
					withOne (Object, save_id_find(self->save_var_save_id.Value(t)), self->id)
						sVar(hq_hiding) = ObjType(obj_history, self.otherId)->save_var_old_value.Value(t);
			
			
		}
		else
			if (sReal(history_redo) > 0)
			{
				withOne (obj_history, global::history_data, self->id)
					for (IntType t = IntType(0); t < self->save_var_amount; t++)
						withOne (Object, save_id_find(self->save_var_save_id.Value(t)), self->id)
							sVar(hq_hiding) = ObjType(obj_history, self.otherId)->save_var_new_value.Value(t);
				
				
			}
			else
			{
				VarType hobj = history_save_var_start(self, ID_action_tl_hq_hiding, false);
				withAll (obj_timeline, self->id)
					if (self->selected > 0)
						action_tl_hq_hiding_tree(self->id, enable, hobj);
				
			}
		
		
	}
	
	void action_tl_hq_hiding_tree(VarType tl, VarType nval, VarType hobj)
	{
		withOne (obj_history, hobj, noone)
			history_save_var(self, tl, ObjType(obj_timeline, tl)->hq_hiding, nval);
		
		ObjType(obj_timeline, tl)->hq_hiding = nval;
		for (IntType i = IntType(0); i < ds_list_size(ObjType(obj_timeline, tl)->tree_list); i++)
			if (!(ObjType(obj_timeline, DsList(ObjType(obj_timeline, tl)->tree_list).Value(i))->selected > 0))
				action_tl_hq_hiding_tree(DsList(ObjType(obj_timeline, tl)->tree_list).Value(i), nval, hobj);
	}
	
	void action_tl_inherit_alpha(ScopeAny self, VarType enable)
	{
		if (sReal(history_undo) > 0)
		{
			withOne (obj_history, global::history_data, self->id)
			{
				for (IntType t = IntType(0); t < self->save_var_amount; t++)
				{
					withOne (Object, save_id_find(self->save_var_save_id.Value(t)), self->id)
					{
						sVar(inherit_alpha) = ObjType(obj_history, self.otherId)->save_var_old_value.Value(t);
						sBool(update_matrix) = true;
					}
					
				}
			}
			
		}
		else
			if (sReal(history_redo) > 0)
			{
				withOne (obj_history, global::history_data, self->id)
				{
					for (IntType t = IntType(0); t < self->save_var_amount; t++)
					{
						withOne (Object, save_id_find(self->save_var_save_id.Value(t)), self->id)
						{
							sVar(inherit_alpha) = ObjType(obj_history, self.otherId)->save_var_new_value.Value(t);
							sBool(update_matrix) = true;
						}
						
					}
				}
				
			}
			else
			{
				VarType hobj = history_save_var_start(self, ID_action_tl_inherit_alpha, false);
				withAll (obj_timeline, self->id)
				{
					if (!(self->selected > 0))
						continue;
					withOne (obj_history, hobj, self->id)
						history_save_var(self, self.otherId, ObjType(obj_timeline, self.otherId)->inherit_alpha, enable);
					
					self->inherit_alpha = enable;
					self->update_matrix = true;
				}
				
			}
		
		
		tl_update_matrix(self);
	}
	
	void action_tl_inherit_bend(ScopeAny self, VarType enable)
	{
		if (sReal(history_undo) > 0)
		{
			withOne (obj_history, global::history_data, self->id)
			{
				for (IntType t = IntType(0); t < self->save_var_amount; t++)
				{
					withOne (Object, save_id_find(self->save_var_save_id.Value(t)), self->id)
					{
						sVar(inherit_bend) = ObjType(obj_history, self.otherId)->save_var_old_value.Value(t);
						sBool(update_matrix) = true;
					}
					
				}
			}
			
		}
		else
			if (sReal(history_redo) > 0)
			{
				withOne (obj_history, global::history_data, self->id)
				{
					for (IntType t = IntType(0); t < self->save_var_amount; t++)
					{
						withOne (Object, save_id_find(self->save_var_save_id.Value(t)), self->id)
						{
							sVar(inherit_bend) = ObjType(obj_history, self.otherId)->save_var_new_value.Value(t);
							sBool(update_matrix) = true;
						}
						
					}
				}
				
			}
			else
			{
				VarType hobj = history_save_var_start(self, ID_action_tl_inherit_bend, IntType(0));
				withAll (obj_timeline, self->id)
				{
					if (!(self->selected > 0))
						continue;
					withOne (obj_history, hobj, self->id)
						history_save_var(self, self.otherId, ObjType(obj_timeline, self.otherId)->inherit_bend, enable);
					
					self->inherit_bend = enable;
					self->update_matrix = true;
				}
				
			}
		
		
		tl_update_matrix(self);
	}
	
	void action_tl_inherit_color(ScopeAny self, VarType enable)
	{
		if (sReal(history_undo) > 0)
		{
			withOne (obj_history, global::history_data, self->id)
			{
				for (IntType t = IntType(0); t < self->save_var_amount; t++)
				{
					withOne (Object, save_id_find(self->save_var_save_id.Value(t)), self->id)
					{
						sVar(inherit_color) = ObjType(obj_history, self.otherId)->save_var_old_value.Value(t);
						sBool(update_matrix) = true;
					}
					
				}
			}
			
		}
		else
			if (sReal(history_redo) > 0)
			{
				withOne (obj_history, global::history_data, self->id)
				{
					for (IntType t = IntType(0); t < self->save_var_amount; t++)
					{
						withOne (Object, save_id_find(self->save_var_save_id.Value(t)), self->id)
						{
							sVar(inherit_color) = ObjType(obj_history, self.otherId)->save_var_new_value.Value(t);
							sBool(update_matrix) = true;
						}
						
					}
				}
				
			}
			else
			{
				VarType hobj = history_save_var_start(self, ID_action_tl_inherit_color, false);
				withAll (obj_timeline, self->id)
				{
					if (!(self->selected > 0))
						continue;
					withOne (obj_history, hobj, self->id)
						history_save_var(self, self.otherId, ObjType(obj_timeline, self.otherId)->inherit_color, enable);
					
					self->inherit_color = enable;
					self->update_matrix = true;
				}
				
			}
		
		
		tl_update_matrix(self);
	}
	
	void action_tl_inherit_glow_color(ScopeAny self, VarType enable)
	{
		if (sReal(history_undo) > 0)
		{
			withOne (obj_history, global::history_data, self->id)
			{
				for (IntType t = IntType(0); t < self->save_var_amount; t++)
				{
					withOne (Object, save_id_find(self->save_var_save_id.Value(t)), self->id)
					{
						sVar(inherit_glow_color) = ObjType(obj_history, self.otherId)->save_var_old_value.Value(t);
						sBool(update_matrix) = true;
					}
					
				}
			}
			
		}
		else
			if (sReal(history_redo) > 0)
			{
				withOne (obj_history, global::history_data, self->id)
				{
					for (IntType t = IntType(0); t < self->save_var_amount; t++)
					{
						withOne (Object, save_id_find(self->save_var_save_id.Value(t)), self->id)
						{
							sVar(inherit_glow_color) = ObjType(obj_history, self.otherId)->save_var_new_value.Value(t);
							sBool(update_matrix) = true;
						}
						
					}
				}
				
			}
			else
			{
				VarType hobj = history_save_var_start(self, ID_action_tl_inherit_glow_color, false);
				withAll (obj_timeline, self->id)
				{
					if (!(self->selected > 0))
						continue;
					withOne (obj_history, hobj, self->id)
						history_save_var(self, self.otherId, ObjType(obj_timeline, self.otherId)->inherit_glow_color, enable);
					
					self->inherit_glow_color = enable;
					self->update_matrix = true;
				}
				
			}
		
		
		tl_update_matrix(self);
	}
	
}