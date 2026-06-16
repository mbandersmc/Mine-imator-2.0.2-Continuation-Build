/// view_shape_camera(timeline)
/// @arg timeline
/// @desc Renders a camera shape.

function view_shape_camera(tl)
{
	var mat = tl.matrix;
	
	// Camera shake
	if (tl.value[e_value.CAM_SHAKE])
	{
		var shake = vec3(
			simplex_lib((app.timeline_marker/app.project_tempo) * tl.value[e_value.CAM_SHAKE_SPEED_X]) * tl.value[e_value.CAM_SHAKE_STRENGTH_X],
			simplex_lib((app.timeline_marker/app.project_tempo) * tl.value[e_value.CAM_SHAKE_SPEED_Y], 1000) * tl.value[e_value.CAM_SHAKE_STRENGTH_Y],
			simplex_lib((app.timeline_marker/app.project_tempo) * tl.value[e_value.CAM_SHAKE_SPEED_Z], 2000) * tl.value[e_value.CAM_SHAKE_STRENGTH_Z],
		);
	
		// Create matrix
		var shakemat;
		if (tl.value[e_value.CAM_SHAKE_MODE])
			shakemat = matrix_create(shake, vec3(0), vec3(1))
		else
			shakemat = matrix_create(vec3(0), vec3(shake[X], -shake[Y], shake[Z]), vec3(1))
	
		mat = matrix_multiply(shakemat, mat)
	}
	
	// Box
	view_shape_box(point3D(-3.5, -5, -4), point3D(3.5, 5, 4), tl.matrix)
	
	// Rolls
	view_shape_circle(point3D(0, 3, 6.5), 2.5, tl.matrix)
	view_shape_circle(point3D(0, -3, 6.5), 2.5, tl.matrix)
	
	// Lens
	var lens = array(
		point3D(-1.5, 5, -1.5),
		point3D(-1.5, 5, 1.5),
		point3D(1.5, 5, -1.5),
		point3D(1.5, 5, 1.5),
		point3D(-3, 9, -3),
		point3D(-3, 9, 3),
		point3D(3, 9, -3),
		point3D(3, 9, 3)
	);
	
	view_shape_line(point3D_mul_matrix(lens[0], tl.matrix),	point3D_mul_matrix(lens[1], tl.matrix))
	view_shape_line(point3D_mul_matrix(lens[1], tl.matrix),	point3D_mul_matrix(lens[3], tl.matrix))
	view_shape_line(point3D_mul_matrix(lens[3], tl.matrix),	point3D_mul_matrix(lens[2], tl.matrix))
	view_shape_line(point3D_mul_matrix(lens[2], tl.matrix),	point3D_mul_matrix(lens[0], tl.matrix))
	
	view_shape_line(point3D_mul_matrix(lens[4], mat),	point3D_mul_matrix(lens[5], mat))
	view_shape_line(point3D_mul_matrix(lens[5], mat),	point3D_mul_matrix(lens[7], mat))
	view_shape_line(point3D_mul_matrix(lens[7], mat),	point3D_mul_matrix(lens[6], mat))
	view_shape_line(point3D_mul_matrix(lens[6], mat),	point3D_mul_matrix(lens[4], mat))
	
	view_shape_line(point3D_mul_matrix(lens[0], tl.matrix),	point3D_mul_matrix(lens[4], mat))
	view_shape_line(point3D_mul_matrix(lens[1], tl.matrix),	point3D_mul_matrix(lens[5], mat))
	view_shape_line(point3D_mul_matrix(lens[3], tl.matrix),	point3D_mul_matrix(lens[7], mat))
	view_shape_line(point3D_mul_matrix(lens[2], tl.matrix),	point3D_mul_matrix(lens[6], mat))
}
