/// vbuffer_create_sphere(radius, tex1, tex2, detail, ringdetail, smooth, invert)
/// @arg radius
/// @arg tex1
/// @arg tex2
/// @arg detail
/// @arg ringdetail
/// @arg smooth
/// @arg invert

function vbuffer_create_sphere(rad, tex1, tex2, detail, ringdetail, smooth, invert)
{
	vbuffer_start();
	
	var texsize, n;
	texsize = point2D_sub(tex2, tex1)
	n = negate(invert)
	
	var i = 0;
	repeat (detail)
	{
		var j, ip, ipi2, ippi2;
		ip = i
		i += 1 / detail
		ippi2 = ip * pi * 2
		ipi2 = i * pi * 2
		
		j = 0
		repeat (ringdetail)
		{
			var jp, jpi, jppi;
			jp = j
			j += 1 / ringdetail
			jppi = jp * pi
			jpi = j * pi
			
			// Vertices
			var x1, y1, z1, x2, y2, z2, x3, y3, z3, x4, y4, z4;
			x1 = (rad * sin(jpi)) * sin(ipi2)
			y1 = (rad * sin(jpi)) * cos(ipi2)
			z1 = rad * cos(jpi)
			x2 = (rad * sin(jppi)) * sin(ipi2)
			y2 = (rad * sin(jppi)) * cos(ipi2)
			z2 = rad * cos(jppi)
			x3 = (rad * sin(jpi)) * sin(ippi2)
			y3 = (rad * sin(jpi)) * cos(ippi2)
			z3 = rad * cos(jpi)
			x4 = (rad * sin(jppi)) * sin(ippi2)
			y4 = (rad * sin(jppi)) * cos(ippi2)
			z4 = rad * cos(jppi)
			
			// Normals
			var n1x, n1y, n1z, n2x, n2y, n2z, n3x, n3y, n3z, n4x, n4y, n4z;
			n1x = sin(jpi) * sin(ipi2)
			n1y = sin(jpi) * cos(ipi2)
			n1z = cos(jpi)
			n2x = sin(jppi) * sin(ipi2)
			n2y = sin(jppi) * cos(ipi2)
			n2z = cos(jppi)
			n3x = sin(jpi) * sin(ippi2)
			n3y = sin(jpi) * cos(ippi2)
			n3z = cos(jpi)
			n4x = sin(jppi) * sin(ippi2)
			n4y = sin(jppi) * cos(ippi2)
			n4z = cos(jppi)

			if (!smooth)
			{
				var normx, normy, normz;
				normx = (n1x + n2x + n3x + n4x) / 4
				normy = (n1y + n2y + n3y + n4y) / 4
				normz = (n1z + n2z + n3z + n4z) / 4
				
				n1x = normx
				n2x = normx
				n3x = normx
				n4x = normx
				n1y = normy
				n2y = normy
				n3y = normy
				n4y = normy
				n1z = normz
				n2z = normz
				n3z = normz
				n4z = normz
			}
			
			var u1, u2, v1, v2;
			u1 = tex1[X] + ip * texsize[X]
			u2 = tex1[X] + i * texsize[X]
			v1 = tex1[Y] + jp * texsize[Y]
			v2 = tex1[Y] + j * texsize[Y]
			
			if (invert)
			{
				vertex_add(x3, y3, z3, n3x * n, n3y * n, n3z * n, u1, v2)
				vertex_add(x1, y1, z1, n1x * n, n1y * n, n1z * n, u2, v2)
				vertex_add(x2, y2, z2, n2x * n, n2y * n, n2z * n, u2, v1)
				
				vertex_add(x3, y3, z3, n3x * n, n3y * n, n3z * n, u1, v2)
				vertex_add(x2, y2, z2, n2x * n, n2y * n, n2z * n, u2, v1)
				vertex_add(x4, y4, z4, n4x * n, n4y * n, n4z * n, u1, v1)
			}
			else
			{
				vertex_add(x1, y1, z1, n1x * n, n1y * n, n1z * n, u2, v2)
				vertex_add(x3, y3, z3, n3x * n, n3y * n, n3z * n, u1, v2)
				vertex_add(x2, y2, z2, n2x * n, n2y * n, n2z * n, u2, v1)
				
				vertex_add(x2, y2, z2, n2x * n, n2y * n, n2z * n, u2, v1)
				vertex_add(x3, y3, z3, n3x * n, n3y * n, n3z * n, u1, v2)
				vertex_add(x4, y4, z4, n4x * n, n4y * n, n4z * n, u1, v1)
			}
		}
	}
	
	return vbuffer_done()
}
