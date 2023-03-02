/*
	NOTE:
	This file was autogenerated by CppGen, changes may be overwritten and forever lost!
	Modify at your own risk!
	
	[ Generated on 2023.03.01 09:08:58 ]
*/

#include "Scripts.hpp"

namespace CppProject
{
	VarType project_load_legacy_beta_value(IntType vid, VarType val)
	{
		switch ((IntType)vid)
		{
			case e_value_ALPHA:
			{
				return IntType(1) - val;
			}
			case e_value_SCA_X:
			case e_value_SCA_Y:
			case e_value_SCA_Z:
			{
				return IntType(1) + val;
			}
			case e_value_LIGHT_COLOR:
			{
				return c_white - val;
			}
			case e_value_BEND_ANGLE_LEGACY:
			{
				return val * IntType(130);
			}
			case e_value_LIGHT_RANGE:
			{
				return (IntType(1) - val) * IntType(250);
			}
			case e_value_TRANSITION:
			{
				switch ((IntType)val)
				{
					case IntType(0):
					{
						return /*"linear"*/ STR(534);
					}
					case IntType(1):
					{
						return /*"easeinquad"*/ STR(537);
					}
					case IntType(2):
					{
						return /*"easeoutquad"*/ STR(538);
					}
					case IntType(3):
					{
						return /*"easeinoutquad"*/ STR(539);
					}
					case IntType(4):
					{
						return /*"instant"*/ STR(535);
					}
				}
				
				return /*"linear"*/ STR(534);
			}
			
			case e_value_CAM_ROTATE_ANGLE_XY:
			{
				return val - IntType(90);
			}
			case e_value_CAM_FOV:
			{
				return IntType(50) + val * IntType(100);
			}
		}
		
		return val;
	}
	
	IntType project_load_legacy_beta_value_id(VarType type, IntType vid)
	{
		if (type == e_tl_type_CAMERA)
		{
			switch ((IntType)vid)
			{
				case IntType(0):
				{
					return -IntType(1);
				}
				case IntType(1):
				{
					return -IntType(1);
				}
				case IntType(2):
				{
					return -IntType(1);
				}
				case IntType(3):
				{
					return e_value_POS_X;
				}
				case IntType(4):
				{
					return e_value_POS_Y;
				}
				case IntType(5):
				{
					return e_value_POS_Z;
				}
				case IntType(6):
				{
					return e_value_CAM_ROTATE_DISTANCE;
				}
				case IntType(7):
				{
					return e_value_CAM_ROTATE_ANGLE_XY;
				}
				case IntType(8):
				{
					return e_value_CAM_ROTATE_ANGLE_Z;
				}
				case IntType(9):
				{
					return e_value_MIX_PERCENT;
				}
				case IntType(10):
				{
					return e_value_MIX_COLOR;
				}
				case IntType(11):
				{
					return -IntType(1);
				}
				case IntType(12):
				{
					return e_value_CAM_FOV;
				}
			}
			
		}
		else
		{
			switch ((IntType)vid)
			{
				case IntType(0):
				{
					return e_value_ALPHA;
				}
				case IntType(1):
				{
					return e_value_MIX_PERCENT;
				}
				case IntType(2):
				{
					if (type == e_tl_type_POINT_LIGHT)
						return e_value_LIGHT_RANGE;
					return e_value_MIX_COLOR;
				}
				case IntType(3):
				{
					return e_value_SCA_X;
				}
				case IntType(4):
				{
					return e_value_SCA_Y;
				}
				case IntType(5):
				{
					return e_value_SCA_Z;
				}
				case IntType(6):
				{
					return e_value_POS_X;
				}
				case IntType(7):
				{
					return e_value_POS_Y;
				}
				case IntType(8):
				{
					return e_value_POS_Z;
				}
				case IntType(9):
				{
					return e_value_ROT_X;
				}
				case IntType(10):
				{
					return e_value_ROT_Y;
				}
				case IntType(11):
				{
					return e_value_ROT_Z;
				}
				case IntType(12):
				{
					return e_value_BEND_ANGLE_LEGACY;
				}
			}
			
		}
		
		return -IntType(1);
	}
	
	VarType project_load_legacy_model_name(RealType modelid)
	{
		if (global::load_format >= e_project_FORMAT_100_DEMO_2)
			return DsMap(global::legacy_model_id_100_demo_map).Value(string(modelid));
		else
			if (global::load_format >= e_project_FORMAT_06)
				return DsMap(global::legacy_model_id_06_map).Value(string(modelid));
			else
				return DsMap(global::legacy_model_id_05_map).Value(string(modelid));
		
		
		return VarType();
	}
	
	void project_load_legacy_objects()
	{
		RealType am = buffer_read_int();
		debug({ /*"templates"*/ STR(2121), am });
		for (IntType _it = 0, _it_max = am; _it < _it_max; _it++)
			project_load_legacy_template();
		am = buffer_read_int();
		debug({ /*"timelines"*/ STR(2122), am });
		for (IntType _it = 0, _it_max = am; _it < _it_max; _it++)
			project_load_legacy_timeline();
		am = buffer_read_int();
		debug({ /*"resources"*/ STR(212), am });
		for (IntType _it = 0, _it_max = am; _it < _it_max; _it++)
			project_load_legacy_resource();
	}
	
	void project_load_legacy_particles(ScopeAny self)
	{
		sVar(pc_spawn_constant) = buffer_read_byte();
		sVar(pc_spawn_amount) = buffer_read_int();
		sVar(pc_spawn_region_use) = buffer_read_byte();
		sVar(pc_spawn_region_type) = buffer_read_string_int();
		sVar(pc_spawn_region_sphere_radius) = buffer_read_double();
		sVar(pc_spawn_region_cube_size) = buffer_read_double();
		sVar(pc_spawn_region_box_size)[X_] = buffer_read_double();
		sVar(pc_spawn_region_box_size)[Y_] = buffer_read_double();
		sVar(pc_spawn_region_box_size)[Z_] = buffer_read_double();
		sVar(pc_spawn_region_path) = null_;
		sVar(pc_spawn_region_path_radius) = IntType(8);
		ArrType boxtype = ArrType::From({ /*"none"*/ STR(873), /*"ground"*/ STR(135), /*"spawn"*/ STR(1320), /*"custom"*/ STR(583) });
		sVar(pc_bounding_box_type) = boxtype.Value(buffer_read_byte());
		if (global::load_format >= e_project_FORMAT_100_DEMO_4)
			sVar(pc_bounding_box_ground_z) = buffer_read_double();
		else
			sVar(pc_bounding_box_ground_z) = IntType(0);
		
		sVar(pc_bounding_box_custom_start)[X_] = buffer_read_double();
		sVar(pc_bounding_box_custom_start)[Y_] = buffer_read_double();
		sVar(pc_bounding_box_custom_start)[Z_] = buffer_read_double();
		sVar(pc_bounding_box_custom_end)[X_] = buffer_read_double();
		sVar(pc_bounding_box_custom_end)[Y_] = buffer_read_double();
		sVar(pc_bounding_box_custom_end)[Z_] = buffer_read_double();
		sVar(pc_bounding_box_relative) = buffer_read_byte();
		sVar(pc_destroy_at_animation_finish) = buffer_read_byte();
		sVar(pc_destroy_at_amount) = buffer_read_byte();
		sVar(pc_destroy_at_amount_val) = buffer_read_int();
		sVar(pc_destroy_at_time) = buffer_read_byte();
		sVar(pc_destroy_at_time_seconds) = buffer_read_double();
		sVar(pc_destroy_at_time_israndom) = buffer_read_byte();
		sVar(pc_destroy_at_time_random_min) = buffer_read_double();
		sVar(pc_destroy_at_time_random_max) = buffer_read_double();
		sVar(pc_destroy_at_bounding_box) = false;
		sInt(pc_type_list) = ds_list_create();
		sReal(pc_type_amount) = buffer_read_int();
		for (IntType p = IntType(0); p < sReal(pc_type_amount); p++)
		{
			withOne (obj_particle_type, (new obj_particle_type)->id, self->id)
			{
				self->loaded = true;
				self->creator = self.otherId;
				ds_list_add({ idInt(self.otherId, pc_type_list), self->id });
				if (global::load_format >= e_project_FORMAT_100_DEBUG)
				{
					self->load_id = project_load_legacy_save_id();
					DsMap(global::save_id_map)[self->load_id] = self->load_id;
				}
				else
					self->load_id = save_id_create();
				
				self->name = buffer_read_string_int();
				self->temp = project_load_legacy_save_id();
				if (self->temp == null_)
					self->temp = particle_sheet;
				self->text = buffer_read_string_int();
				if (global::load_format >= e_project_FORMAT_100_DEMO_3)
					self->spawn_rate = buffer_read_double();
				self->sprite_tex = project_load_legacy_save_id();
				self->sprite_tex_image = buffer_read_byte();
				self->sprite_frame_width = buffer_read_int();
				self->sprite_frame_height = buffer_read_int();
				self->sprite_frame_start = buffer_read_int();
				self->sprite_frame_end = buffer_read_int();
				self->sprite_animation_speed = buffer_read_double();
				self->sprite_animation_speed_israndom = buffer_read_byte();
				self->sprite_animation_speed_random_min = buffer_read_double();
				self->sprite_animation_speed_random_max = buffer_read_double();
				self->sprite_animation_onend = buffer_read_byte();
				self->rot_extend = buffer_read_byte();
				self->spd_extend = buffer_read_byte();
				self->rot_spd_extend = buffer_read_byte();
				for (IntType a = X_; a <= Z_; a++)
				{
					self->spd[a] = buffer_read_double();
					self->spd_israndom[a] = buffer_read_byte();
					self->spd_random_min[a] = buffer_read_double();
					self->spd_random_max[a] = buffer_read_double();
					self->spd_add[a] = buffer_read_double();
					self->spd_add_israndom[a] = buffer_read_byte();
					self->spd_add_random_min[a] = buffer_read_double();
					self->spd_add_random_max[a] = buffer_read_double();
					self->spd_mul[a] = buffer_read_double();
					self->spd_mul_israndom[a] = buffer_read_byte();
					self->spd_mul_random_min[a] = buffer_read_double();
					self->spd_mul_random_max[a] = buffer_read_double();
					self->rot[a] = buffer_read_double();
					self->rot_israndom[a] = buffer_read_byte();
					self->rot_random_min[a] = buffer_read_double();
					self->rot_random_max[a] = buffer_read_double();
					self->rot_spd[a] = buffer_read_double();
					self->rot_spd_israndom[a] = buffer_read_byte();
					self->rot_spd_random_min[a] = buffer_read_double();
					self->rot_spd_random_max[a] = buffer_read_double();
					self->rot_spd_add[a] = buffer_read_double();
					self->rot_spd_add_israndom[a] = buffer_read_byte();
					self->rot_spd_add_random_min[a] = buffer_read_double();
					self->rot_spd_add_random_max[a] = buffer_read_double();
					self->rot_spd_mul[a] = buffer_read_double();
					self->rot_spd_mul_israndom[a] = buffer_read_byte();
					self->rot_spd_mul_random_min[a] = buffer_read_double();
					self->rot_spd_mul_random_max[a] = buffer_read_double();
				}
				self->scale = buffer_read_double();
				self->scale_israndom = buffer_read_byte();
				self->scale_random_min = buffer_read_double();
				self->scale_random_max = buffer_read_double();
				self->scale_add = buffer_read_double();
				self->scale_add_israndom = buffer_read_byte();
				self->scale_add_random_min = buffer_read_double();
				self->scale_add_random_max = buffer_read_double();
				self->alpha = buffer_read_double();
				self->alpha_israndom = buffer_read_byte();
				self->alpha_random_min = buffer_read_double();
				self->alpha_random_max = buffer_read_double();
				self->alpha_add = buffer_read_double();
				self->alpha_add_israndom = buffer_read_byte();
				self->alpha_add_random_min = buffer_read_double();
				self->alpha_add_random_max = buffer_read_double();
				self->color = buffer_read_int();
				self->color_israndom = buffer_read_byte();
				self->color_random_start = buffer_read_int();
				self->color_random_end = buffer_read_int();
				self->color_mix_enabled = buffer_read_byte();
				self->color_mix = buffer_read_int();
				self->color_mix_israndom = buffer_read_byte();
				self->color_mix_random_start = buffer_read_int();
				self->color_mix_random_end = buffer_read_int();
				self->color_mix_time = buffer_read_double();
				self->color_mix_time_israndom = buffer_read_byte();
				self->color_mix_time_random_min = buffer_read_double();
				self->color_mix_time_random_max = buffer_read_double();
				if (global::load_format >= e_project_FORMAT_100_DEMO_3)
					self->spawn_region = buffer_read_byte();
				self->bounding_box = buffer_read_byte();
				self->bounce = buffer_read_byte();
				self->bounce_factor = buffer_read_double();
				self->orbit = buffer_read_byte();
			}
			
		}
	}
	
	void project_load_legacy_project(ScopeAny self)
	{
		sVar(project_name) = buffer_read_string_int();
		sVar(project_author) = buffer_read_string_int();
		sVar(project_description) = buffer_read_string_int();
		if (global::load_format < e_project_FORMAT_100_DEBUG)
			buffer_read_byte();
		sVar(project_video_width) = buffer_read_int();
		sVar(project_video_height) = buffer_read_int();
		sVar(project_video_template) = find_videotemplate(sVar(project_video_width), sVar(project_video_height));
		sVar(project_video_keep_aspect_ratio) = buffer_read_byte();
		sVar(project_tempo) = buffer_read_byte();
		if (global::load_format >= e_project_FORMAT_100)
			sVar(timeline_repeat) = buffer_read_byte();
		if (global::load_format >= e_project_FORMAT_105_2)
			sVar(timeline_marker) = buffer_read_double();
		if (global::load_format >= e_project_FORMAT_100_DEMO_4)
		{
			if (self->subAssetId == ID_app)
			{
				ObjType(obj_scrollbar, idInt(sVar(timeline), hor_scroll))->value = buffer_read_double();
				sVar(timeline_zoom) = buffer_read_double();
				sVar(timeline_zoom_goal) = sVar(timeline_zoom);
			}
			else
			{
				buffer_read_double();
				buffer_read_double();
			}
			
		}
		if (global::load_format >= e_project_FORMAT_100_DEBUG)
		{
			sVar(timeline_region_start) = buffer_read_int();
			sVar(timeline_region_end) = buffer_read_int();
		}
	}
	
	void project_load_legacy_resource()
	{
		withOne (obj_resource, (new obj_resource)->id, noone)
		{
			self->loaded = true;
			self->load_id = buffer_read_int();
			DsMap(global::save_id_map)[self->load_id] = self->load_id;
			StringType typename_ = buffer_read_string_int();
			if (typename_ == /*"item"*/ STR(506))
				typename_ = /*"itemsheet"*/ STR(526);
			if (typename_ == /*"block"*/ STR(507) || typename_ == /*"blocksheet"*/ STR(528))
				typename_ = /*"legacyblocksheet"*/ STR(527);
			if (typename_ == /*"particles"*/ STR(509))
				typename_ = /*"particlesheet"*/ STR(530);
			if (typename_ == /*"schematic"*/ STR(2123))
				typename_ = /*"scenery"*/ STR(505);
			self->type = ds_list_find_index(global::res_type_name_list, typename_);
			self->filename = buffer_read_string_int();
			self->player_skin = buffer_read_byte();
			buffer_read_string_int();
			if (global::load_format >= e_project_FORMAT_100_DEBUG)
				buffer_read_byte();
			if (global::load_format >= e_project_FORMAT_100_DEMO_4 && (self->type == e_res_type_PACK || self->type == e_res_type_LEGACY_BLOCK_SHEET))
				for (IntType _it = 0, _it_max = IntType(32) * IntType(16); _it < _it_max; _it++)
					buffer_read_byte();
			if (self->type == e_res_type_ITEM_SHEET)
				self->item_sheet_size = vec2(IntType(16), IntType(16));
			if (self->type == e_res_type_PACK)
			{
				DsMap(global::save_id_map)[self->load_id] = /*"default"*/ STR(98);
				instance_destroy(ScopeAny(self));
				break;
			}
			self->scenery_tl_add = false;
			sortlist_add(global::_app->res_list, self->id);
		}
		
	}
	
	VarType project_load_legacy_save_id()
	{
		RealType saveid = buffer_read_int();
		if (saveid < IntType(0))
			return null_;
		if (saveid == IntType(0))
			return /*"root"*/ STR(2112);
		if (saveid == IntType(1))
			return /*"default"*/ STR(98);
		return saveid;
	}
	
	BoolType project_load_legacy_start(VarType argument0)
	{
		VarType fn = argument0;
		global::buffer_current = buffer_load_lib(fn);
		global::load_format = buffer_read_byte();
		if (global::load_format > e_project_FORMAT_CB_103)
		{
			log({ /*"Invalid format"*/ STR(2124), global::load_format });
			error(/*"errorfilecorrupted"*/ STR(2125));
			buffer_delete(global::buffer_current);
			return false;
		}
		else
			if (global::load_format < e_project_FORMAT_05)
			{
				log({ /*"Too old legacy project, format"*/ STR(2126), global::load_format });
				error(/*"errorfilecorrupted"*/ STR(2125));
				buffer_delete(global::buffer_current);
				return false;
			}
		
		log({ /*"load_format"*/ STR(1218), global::load_format });
		return true;
	}
	
	void project_load_legacy_template()
	{
		withOne (obj_template, (new obj_template)->id, noone)
		{
			self->loaded = true;
			self->load_id = buffer_read_int();
			DsMap(global::save_id_map)[self->load_id] = self->load_id;
			StringType typename_ = buffer_read_string_int();
			self->type = ds_list_find_index(global::temp_type_name_list, typename_);
			self->name = buffer_read_string_int();
			if (global::load_format == e_project_FORMAT_100_DEMO_2)
				buffer_read_int();
			self->model_tex = project_load_legacy_save_id();
			if (global::load_format >= e_project_FORMAT_100_DEBUG)
				self->legacy_model_name = buffer_read_string_int();
			else
				self->legacy_model_name = project_load_legacy_model_name(buffer_read_int());
			
			self->legacy_bodypart_id = buffer_read_int();
			if (self->type == e_temp_type_CHARACTER || self->type == e_temp_type_SPECIAL_BLOCK || self->type == e_temp_type_BODYPART)
			{
				VarType modelmap = DsMap(global::legacy_model_name_map).Value(self->legacy_model_name);
				if (ds_map_valid(modelmap))
				{
					self->model_name = DsMap(modelmap).Value(/*"name"*/ STR(786));
					if (!is_undefined(DsMap(modelmap).Value(/*"state"*/ STR(982))))
						self->model_state = string_get_state_vars(DsMap(modelmap).Value(/*"state"*/ STR(982)));
					else
						self->model_state = ArrType();
					
				}
				else
					log({ /*"Could not convert model "*/ STR(2127), self->legacy_model_name });
				
			}
			if (self->type == e_temp_type_BODYPART)
			{
				VarType modelpartlist = DsMap(global::legacy_model_part_map).Value(self->model_name);
				if (ds_list_valid(modelpartlist) && self->legacy_bodypart_id < ds_list_size((IntType)(modelpartlist)))
					self->model_part_name = DsList(modelpartlist).Value(self->legacy_bodypart_id);
				else
					log({ /*"Could not convert model part of "*/ STR(2128), self->model_name, self->legacy_bodypart_id });
				
			}
			self->item_tex = project_load_legacy_save_id();
			if (global::load_format >= e_project_FORMAT_100_DEBUG)
				self->legacy_item_sheet = buffer_read_byte();
			self->item_slot = buffer_read_int();
			self->item_3d = buffer_read_byte();
			self->item_face_camera = buffer_read_byte();
			self->item_bounce = buffer_read_byte();
			IntType bid, bdata;
			bid = buffer_read_short();
			bdata = buffer_read_byte();
			if (global::legacy_block_set.Value(bid))
			{
				VarType block = global::legacy_block_obj[bid][bdata];
				if (block != null_)
				{
					self->block_name = ObjType(obj_block, block)->name;
					self->block_state = block_get_state_id_state_vars(block, global::legacy_block_state_id[bid][bdata]);
				}
			}
			self->block_tex = project_load_legacy_save_id();
			self->scenery = buffer_read_int();
			if (self->scenery == IntType(0))
				self->scenery = null_;
			self->block_repeat_enable = buffer_read_byte();
			self->block_repeat[X_] = buffer_read_int();
			self->block_repeat[Y_] = buffer_read_int();
			self->block_repeat[Z_] = buffer_read_int();
			self->shape_tex = buffer_read_int();
			if (self->shape_tex == IntType(0))
				self->shape_tex = null_;
			if (global::load_format >= e_project_FORMAT_100_DEBUG)
			{
				self->shape_tex_mapped = buffer_read_byte();
				self->shape_tex_hoffset = buffer_read_double();
				self->shape_tex_voffset = buffer_read_double();
			}
			self->shape_tex_hrepeat = buffer_read_double();
			self->shape_tex_vrepeat = buffer_read_double();
			self->shape_tex_hmirror = buffer_read_byte();
			self->shape_tex_vmirror = buffer_read_byte();
			if (global::load_format >= e_project_FORMAT_100_DEBUG)
				self->shape_closed = buffer_read_byte();
			self->shape_invert = buffer_read_byte();
			self->shape_detail = buffer_read_int();
			if (global::load_format >= e_project_FORMAT_100_DEBUG)
				self->shape_face_camera = buffer_read_byte();
			self->text_font = project_load_legacy_save_id();
			if (self->text_font == /*"root"*/ STR(2112))
				self->text_font = null_;
			if (global::load_format < e_project_FORMAT_100_DEMO_4)
			{
				buffer_read_string_int();
				buffer_read_byte();
				buffer_read_byte();
			}
			self->text_face_camera = buffer_read_byte();
			if (self->type == e_temp_type_PARTICLE_SPAWNER)
				project_load_legacy_particles(ScopeAny(self));
			if (global::temp_creator == global::_app->id)
				sortlist_add(global::_app->lib_list, self->id);
		}
		
	}
	
	void project_load_legacy_timeline()
	{
		withOne (obj_timeline, (new obj_timeline)->id, noone)
		{
			self->loaded = true;
			self->load_id = buffer_read_int();
			DsMap(global::save_id_map)[self->load_id] = self->load_id;
			StringType typename_ = buffer_read_string_int();
			self->type = ds_list_find_index(global::tl_type_name_list, typename_);
			self->name = buffer_read_string_int();
			self->temp = project_load_legacy_save_id();
			self->text = buffer_read_string_int();
			buffer_read_int();
			self->lock = buffer_read_byte();
			if (global::load_format < e_project_FORMAT_100_DEBUG)
				self->lock = !(self->lock > 0);
			if (global::load_format >= e_project_FORMAT_100_DEBUG)
				self->depth = buffer_read_int();
			self->legacy_bodypart_id = buffer_read_short();
			if (self->type == e_temp_type_BODYPART)
			{
				IntType findtemp;
				withAll (obj_template, self->id)
				{
					if (self->loaded && self->load_id == ObjType(obj_timeline, self.otherId)->temp)
					{
						temp_update_model(ScopeAny(self));
						findtemp = self->id;
						break;
					}
				}
				
				VarType modelpartlist = DsMap(global::legacy_model_part_map).Value(ObjType(obj_template, findtemp)->model_name);
				if (!is_undefined(modelpartlist) && self->legacy_bodypart_id < ds_list_size((IntType)(modelpartlist)))
				{
					self->model_part_name = DsList(modelpartlist).Value(self->legacy_bodypart_id);
					if (ObjType(obj_template, findtemp)->model_file != null_)
					{
						IntType filepartlist = idInt(ObjType(obj_template, findtemp)->model_file, file_part_list);
						for (IntType i = IntType(0); i < ds_list_size(filepartlist); i++)
						{
							VarType part = DsList(filepartlist).Value(i);
							if (ObjType(obj_model_part, part)->name == self->model_part_name)
							{
								self->model_part = part;
								break;
							}
						}
					}
				}
				else
					log({ /*"Could not find model part for"*/ STR(2129), ObjType(obj_template, findtemp)->model_name, ObjType(obj_template, findtemp)->legacy_model_name, self->legacy_bodypart_id });
				
			}
			self->part_of = project_load_legacy_save_id();
			if (self->type == e_temp_type_CHARACTER || self->type == e_temp_type_SPECIAL_BLOCK)
				self->part_list = ds_list_create();
			self->part_amount = buffer_read_short();
			for (IntType p = IntType(0); p < self->part_amount; p++)
				ds_list_add({ self->part_list, project_load_legacy_save_id() });
			self->hide = buffer_read_byte();
			if (global::load_format >= e_project_FORMAT_100_DEMO_3)
				project_load_legacy_value_types(ScopeAny(self));
			else
				tl_update_value_types(ScopeAny(self));
			
			if (global::load_format >= e_project_FORMAT_100_DEMO_4)
				project_load_legacy_values(ScopeAny(self), self->id);
			self->keyframe_amount = buffer_read_int();
			if (self->keyframe_amount == IntType(0))
				for (IntType v = IntType(0); v < e_value_amount; v++)
					self->value_default[v] = self->value.Value(v);
			for (IntType k = IntType(0); k < self->keyframe_amount; k++)
			{
				withOne (obj_keyframe, (new obj_keyframe)->id, self->id)
				{
					self->loaded = true;
					self->position = buffer_read_int();
					self->timeline = self.otherId;
					self->selected = false;
					self->sound_play_index = null_;
					for (IntType v = IntType(0); v < e_value_amount; v++)
						self->value[v] = ObjType(obj_timeline, self.otherId)->value.Value(v);
					project_load_legacy_values(ScopeAny(self), self.otherId);
					ds_list_add({ ObjType(obj_timeline, self.otherId)->keyframe_list, self->id });
				}
				
			}
			self->parent = project_load_legacy_save_id();
			if (global::load_format >= e_project_FORMAT_100_DEBUG)
				self->parent_tree_index = buffer_read_int();
			else
				self->parent_tree_index = null_;
			
			self->lock_bend = buffer_read_byte();
			if (global::load_format < e_project_FORMAT_100_DEBUG)
				for (IntType _it = 0, _it_max = buffer_read_int(); _it < _it_max; _it++)
					buffer_read_int();
			self->tree_extend = buffer_read_byte();
			self->inherit_position = buffer_read_byte();
			self->inherit_rotation = buffer_read_byte();
			self->inherit_scale = buffer_read_byte();
			self->inherit_alpha = buffer_read_byte();
			self->inherit_color = buffer_read_byte();
			self->inherit_texture = buffer_read_byte();
			self->inherit_visibility = buffer_read_byte();
			self->inherit_rot_point = (self->type == e_tl_type_BODYPART);
			self->scale_resize = buffer_read_byte();
			self->rot_point_custom = buffer_read_byte();
			self->rot_point[X_] = buffer_read_double();
			self->rot_point[Y_] = buffer_read_double();
			self->rot_point[Z_] = buffer_read_double();
			if (self->rot_point_custom > 0 && global::load_format < e_project_FORMAT_100_DEBUG && type_is_shape(self->type))
			{
				self->rot_point[X_] -= 8.0;
				self->rot_point[Y_] -= 8.0;
				if (self->type != e_temp_type_SURFACE)
					self->rot_point[Z_] -= 8.0;
			}
			if (self->part_of != null_)
				self->rot_point = point3D(IntType(0), IntType(0), IntType(0));
			self->backfaces = buffer_read_byte();
			self->texture_blur = buffer_read_byte();
			if (global::load_format >= e_project_FORMAT_100_DEBUG)
				self->texture_filtering = buffer_read_byte();
			else
				self->texture_filtering = (self->type == e_temp_type_SCENERY || self->type == e_temp_type_BLOCK);
			
			buffer_read_byte();
			self->shadows = buffer_read_byte();
			if (global::load_format >= e_project_FORMAT_100_DEBUG)
			{
				self->ssao = buffer_read_byte();
				if (global::load_format >= e_project_FORMAT_105_2)
					self->fog = buffer_read_byte();
				self->wind = buffer_read_byte();
				self->wind_amount = buffer_read_double();
			}
			self->wind_terrain = buffer_read_byte();
			if (global::load_format >= e_project_FORMAT_CB_100)
			{
				self->inherit_bend = buffer_read_byte();
				if (self->inherit_bend > 0)
				{
					self->value[e_value_BEND_ANGLE_LEGACY] = IntType(0);
					for (IntType i = IntType(0); i < ds_list_size(self->keyframe_list); i++)
						withOne (obj_keyframe, DsList(self->keyframe_list).Value(i), self->id)
							self->value[e_value_BEND_ANGLE_LEGACY] = IntType(0);
					
				}
				self->hq_hiding = buffer_read_byte();
				self->lq_hiding = buffer_read_byte();
				buffer_read_byte();
			}
		}
		
	}
	
	void project_load_legacy_values(ScopeAny self, IntType tl)
	{
		if (idArr(tl, value_type).Value(e_value_type_TRANSFORM_POS))
		{
			sVar(value)[e_value_POS_X] = buffer_read_double();
			sVar(value)[e_value_POS_Y] = buffer_read_double();
			sVar(value)[e_value_POS_Z] = buffer_read_double();
		}
		if (idArr(tl, value_type).Value(e_value_type_TRANSFORM_ROT))
		{
			sVar(value)[e_value_ROT_X] = buffer_read_double();
			sVar(value)[e_value_ROT_Y] = buffer_read_double();
			sVar(value)[e_value_ROT_Z] = buffer_read_double();
		}
		if (idArr(tl, value_type).Value(e_value_type_TRANSFORM_SCA))
		{
			sVar(value)[e_value_SCA_X] = buffer_read_double();
			sVar(value)[e_value_SCA_Y] = buffer_read_double();
			sVar(value)[e_value_SCA_Z] = buffer_read_double();
		}
		if (idArr(tl, value_type).Value(e_value_type_TRANSFORM_BEND))
		{
			sVar(value)[e_value_BEND_ANGLE_LEGACY] = buffer_read_double();
		}
		if (idArr(tl, value_type).Value(e_value_type_MATERIAL_COLOR))
		{
			sVar(value)[e_value_ALPHA] = buffer_read_double();
			sVar(value)[e_value_RGB_ADD] = buffer_read_int();
			sVar(value)[e_value_RGB_SUB] = buffer_read_int();
			sVar(value)[e_value_RGB_MUL] = buffer_read_int();
			sVar(value)[e_value_HSB_ADD] = buffer_read_int();
			sVar(value)[e_value_HSB_SUB] = buffer_read_int();
			sVar(value)[e_value_HSB_MUL] = buffer_read_int();
			sVar(value)[e_value_MIX_COLOR] = buffer_read_int();
			sVar(value)[e_value_MIX_PERCENT] = buffer_read_double();
			sVar(value)[e_value_EMISSIVE] = buffer_read_double();
		}
		if (idArr(tl, value_type).Value(e_value_type_PARTICLES))
		{
			sVar(value)[e_value_SPAWN] = buffer_read_byte();
			sVar(value)[e_value_ATTRACTOR] = project_load_legacy_save_id();
			if (sVar(value).Value(e_value_ATTRACTOR) == /*"root"*/ STR(2112))
				sVar(value)[e_value_ATTRACTOR] = null_;
			sVar(value)[e_value_FORCE] = buffer_read_double();
		}
		if (idArr(tl, value_type).Value(e_value_type_LIGHT))
		{
			sVar(value)[e_value_LIGHT_COLOR] = buffer_read_int();
			sVar(value)[e_value_LIGHT_RANGE] = buffer_read_double();
			sVar(value)[e_value_LIGHT_FADE_SIZE] = buffer_read_double();
		}
		if (idArr(tl, value_type).Value(e_value_type_SPOTLIGHT))
		{
			sVar(value)[e_value_LIGHT_SPOT_RADIUS] = buffer_read_double();
			sVar(value)[e_value_LIGHT_SPOT_SHARPNESS] = buffer_read_double();
		}
		if (idArr(tl, value_type).Value(e_value_type_CAMERA))
		{
			if (global::load_format >= e_project_FORMAT_100_DEMO_4)
			{
				sVar(value)[e_value_CAM_FOV] = buffer_read_double();
				if (global::load_format != e_project_FORMAT_106_2)
					buffer_read_double();
				sVar(value)[e_value_CAM_ROTATE] = buffer_read_byte();
				sVar(value)[e_value_CAM_ROTATE_DISTANCE] = buffer_read_double();
				sVar(value)[e_value_CAM_ROTATE_ANGLE_XY] = buffer_read_double();
				sVar(value)[e_value_CAM_ROTATE_ANGLE_Z] = buffer_read_double();
			}
			else
			{
				buffer_read_double();
				buffer_read_double();
				buffer_read_double();
				sVar(value)[e_value_CAM_FOV] = buffer_read_double();
			}
			
			sVar(value)[e_value_CAM_DOF] = buffer_read_byte();
			sVar(value)[e_value_CAM_DOF_DEPTH] = buffer_read_double();
			sVar(value)[e_value_CAM_DOF_RANGE] = buffer_read_double();
			sVar(value)[e_value_CAM_DOF_FADE_SIZE] = buffer_read_double();
			if (global::load_format == e_project_FORMAT_106_2)
			{
				sVar(value)[e_value_CAM_WIDTH] = buffer_read_int();
				sVar(value)[e_value_CAM_HEIGHT] = buffer_read_int();
				sVar(value)[e_value_CAM_SIZE_USE_PROJECT] = buffer_read_byte();
				sVar(value)[e_value_CAM_SIZE_KEEP_ASPECT_RATIO] = buffer_read_byte();
			}
			if (global::load_format == e_project_FORMAT_CB_102)
			{
				sVar(value)[e_value_CAM_BLOOM] = buffer_read_byte();
				sVar(value)[e_value_CAM_BLOOM_THRESHOLD] = buffer_read_double();
				sVar(value)[e_value_CAM_BLOOM_INTENSITY] = buffer_read_double();
				sVar(value)[e_value_CAM_BLOOM_THRESHOLD] = ((sVar(value).Value(e_value_CAM_BLOOM_THRESHOLD) - IntType(1)) * -IntType(1)) * IntType(100);
				sVar(value)[e_value_CAM_BLOOM_INTENSITY] = ((sVar(value).Value(e_value_CAM_BLOOM_INTENSITY) - IntType(1)) * -IntType(1)) * IntType(100);
			}
			if (global::load_format >= e_project_FORMAT_CB_103)
			{
				sVar(value)[e_value_CAM_BLOOM] = buffer_read_byte();
				sVar(value)[e_value_CAM_BLOOM_THRESHOLD] = buffer_read_int() / 100.0;
				sVar(value)[e_value_CAM_BLOOM_INTENSITY] = buffer_read_int() / 100.0;
			}
		}
		if (idArr(tl, value_type).Value(e_value_type_BACKGROUND))
		{
			sVar(value)[e_value_BG_SKY_MOON_PHASE] = buffer_read_byte();
			sVar(value)[e_value_BG_SKY_TIME] = buffer_read_double();
			sVar(value)[e_value_BG_SKY_ROTATION] = buffer_read_double();
			sVar(value)[e_value_BG_SKY_CLOUDS_SPEED] = buffer_read_double();
			sVar(value)[e_value_BG_SKY_COLOR] = buffer_read_int();
			sVar(value)[e_value_BG_SKY_CLOUDS_COLOR] = buffer_read_int();
			sVar(value)[e_value_BG_SUNLIGHT_COLOR] = buffer_read_int();
			sVar(value)[e_value_BG_AMBIENT_COLOR] = buffer_read_int();
			sVar(value)[e_value_BG_NIGHT_COLOR] = buffer_read_int();
			sVar(value)[e_value_BG_FOG_COLOR] = buffer_read_int();
			sVar(value)[e_value_BG_FOG_DISTANCE] = buffer_read_double();
			sVar(value)[e_value_BG_FOG_SIZE] = buffer_read_double();
			if (global::load_format >= e_project_FORMAT_100_DEBUG)
				sVar(value)[e_value_BG_FOG_HEIGHT] = buffer_read_double();
			sVar(value)[e_value_BG_WIND_SPEED] = buffer_read_double();
			sVar(value)[e_value_BG_WIND_STRENGTH] = buffer_read_double();
			sVar(value)[e_value_BG_TEXTURE_ANI_SPEED] = buffer_read_double();
			if (global::load_format >= e_project_FORMAT_CB_100)
			{
				buffer_read_int();
			}
		}
		if (idArr(tl, value_type).Value(e_value_type_MATERIAL_TEXTURE))
		{
			sVar(value)[e_value_TEXTURE_OBJ] = project_load_legacy_save_id();
			if (sVar(value).Value(e_value_TEXTURE_OBJ) == /*"root"*/ STR(2112))
				sVar(value)[e_value_TEXTURE_OBJ] = IntType(0);
		}
		if (idArr(tl, value_type).Value(e_value_type_SOUND))
		{
			sVar(value)[e_value_SOUND_OBJ] = project_load_legacy_save_id();
			sVar(value)[e_value_SOUND_VOLUME] = buffer_read_double();
			sVar(value)[e_value_SOUND_START] = buffer_read_double();
			sVar(value)[e_value_SOUND_END] = buffer_read_double();
		}
		sVar(value)[e_value_VISIBLE] = buffer_read_byte();
		sVar(value)[e_value_TRANSITION] = DsList(global::transition_list).Value(buffer_read_int());
	}
	
	void project_load_legacy_value_types(ScopeAny self)
	{
		sArr(value_type)[e_value_type_TRANSFORM_POS] = buffer_read_byte();
		sArr(value_type)[e_value_type_TRANSFORM_ROT] = buffer_read_byte();
		sArr(value_type)[e_value_type_TRANSFORM_SCA] = buffer_read_byte();
		sArr(value_type)[e_value_type_TRANSFORM_BEND] = buffer_read_byte();
		sArr(value_type)[e_value_type_MATERIAL_COLOR] = buffer_read_byte();
		sArr(value_type)[e_value_type_PARTICLES] = buffer_read_byte();
		sArr(value_type)[e_value_type_LIGHT] = buffer_read_byte();
		sArr(value_type)[e_value_type_SPOTLIGHT] = buffer_read_byte();
		sArr(value_type)[e_value_type_CAMERA] = buffer_read_byte();
		if (global::load_format < e_project_FORMAT_100_DEBUG)
			sArr(value_type)[e_value_type_MATERIAL_TEXTURE] = buffer_read_byte();
		if (global::load_format >= e_project_FORMAT_100_DEMO_4)
			sArr(value_type)[e_value_type_BACKGROUND] = buffer_read_byte();
		else
			sArr(value_type)[e_value_type_BACKGROUND] = false;
		
		if (global::load_format >= e_project_FORMAT_100_DEBUG)
			sArr(value_type)[e_value_type_MATERIAL_TEXTURE] = buffer_read_byte();
		if (global::load_format >= e_project_FORMAT_100_DEBUG)
		{
			sArr(value_type)[e_value_type_SOUND] = buffer_read_byte();
			sArr(value_type)[e_value_type_KEYFRAME] = buffer_read_byte();
		}
		else
		{
			sArr(value_type)[e_value_type_SOUND] = false;
			sArr(value_type)[e_value_type_KEYFRAME] = true;
		}
		
		sArr(value_type)[e_value_type_ROT_POINT] = buffer_read_byte();
		if (global::load_format >= e_project_FORMAT_100_DEMO_4)
		{
			sArr(value_type)[e_value_type_HIERARCHY] = buffer_read_byte();
			sArr(value_type)[e_value_type_APPEARANCE] = buffer_read_byte();
		}
		if (global::load_format < e_project_FORMAT_100_DEBUG)
		{
			sArr(value_type)[e_value_type_HIERARCHY] = true;
			sArr(value_type)[e_value_type_APPEARANCE] = true;
		}
		if (global::load_format >= e_project_FORMAT_100_DEBUG)
			sArr(value_type)[e_value_type_AUDIO] = buffer_read_byte();
		else
			sArr(value_type)[e_value_type_AUDIO] = false;
		
	}
	
	void project_load_legacy_work_camera(ScopeAny self)
	{
		sVar(cam_work_focus)[X_] = buffer_read_double();
		sVar(cam_work_focus)[Y_] = buffer_read_double();
		sVar(cam_work_focus)[Z_] = buffer_read_double();
		sVar(cam_work_angle_xy) = buffer_read_double();
		sVar(cam_work_angle_z) = buffer_read_double();
		sVar(cam_work_roll) = buffer_read_double();
		sVar(cam_work_zoom) = buffer_read_double();
		sVar(cam_work_zoom_goal) = sVar(cam_work_zoom);
		sVar(cam_work_angle_look_xy) = sVar(cam_work_angle_xy);
		sVar(cam_work_angle_look_z) = -sVar(cam_work_angle_z);
		camera_work_set_from(self);
	}
	
	RealType project_load_markers(VarType list)
	{
		VarType markermap;
		if (!ds_list_valid(list))
			return IntType(0);
		for (IntType i = IntType(0); i < ds_list_size((IntType)(list)); i++)
		{
			markermap = DsList(list).Value(i);
			withOne (obj_marker, (new obj_marker)->id, noone)
			{
				self->loaded = true;
				self->load_id = value_get_string({ DsMap(markermap).Value(/*"id"*/ STR(82)), self->save_id });
				DsMap(global::save_id_map)[self->load_id] = self->load_id;
				self->pos = value_get_real({ DsMap(markermap).Value(/*"position"*/ STR(40)), IntType(0) });
				self->name = value_get_string({ DsMap(markermap).Value(/*"name"*/ STR(786)), /*""*/ STR(0) });
				self->color = value_get_real({ DsMap(markermap).Value(/*"color"*/ STR(885)), IntType(0) });
			}
			
		}
		return 0.0;
	}
	
	void project_load_objects(IntType map)
	{
		VarType templist = DsMap(map).Value(/*"templates"*/ STR(2121));
		if (ds_list_valid(templist))
			for (IntType i = IntType(0); i < ds_list_size((IntType)(templist)); i++)
				project_load_template(DsList(templist).Value(i));
		VarType tllist = DsMap(map).Value(/*"timelines"*/ STR(2122));
		if (ds_list_valid(tllist))
			for (IntType i = IntType(0); i < ds_list_size((IntType)(tllist)); i++)
				project_load_timeline(DsList(tllist).Value(i));
		VarType reslist = DsMap(map).Value(/*"resources"*/ STR(212));
		if (ds_list_valid(reslist))
			for (IntType i = IntType(0); i < ds_list_size((IntType)(reslist)); i++)
				project_load_resource(DsList(reslist).Value(i));
	}
	
}