#include "CubeAsset.h"

CubeAsset::CubeAsset(float x, float y, float z) {

	num_vertices = 8;
	num_triangles = 12;
	g_vertex_buffer_data = new GLfloat[num_vertices * 3]; // three points per vertex
	g_element_buffer_data = new GLushort[num_triangles * 3]; // three vertices per triangle

	// vertex 0: left, top, front
	g_vertex_buffer_data[0 * 3 + 0] = -0.5;
	g_vertex_buffer_data[0 * 3 + 1] = 0.5;
	g_vertex_buffer_data[0 * 3 + 2] = -0.5;

	// vertex 1: left, top, back
	g_vertex_buffer_data[1 * 3 + 0] = -0.5;
	g_vertex_buffer_data[1 * 3 + 1] = 0.5;
	g_vertex_buffer_data[1 * 3 + 2] = 0.5;

	// vertex 2: right, top, back
	g_vertex_buffer_data[2 * 3 + 0] = 0.5;
	g_vertex_buffer_data[2 * 3 + 1] = 0.5;
	g_vertex_buffer_data[2 * 3 + 2] = 0.5;

	// vertex 3: right, top, front
	g_vertex_buffer_data[3 * 3 + 0] = 0.5;
	g_vertex_buffer_data[3 * 3 + 1] = 0.5;
	g_vertex_buffer_data[3 * 3 + 2] = -0.5;

	// vertex 4: left, down, front
	g_vertex_buffer_data[4 * 3 + 0] = -0.5;
	g_vertex_buffer_data[4 * 3 + 1] = -0.5;
	g_vertex_buffer_data[4 * 3 + 2] = -0.5;

	// vertex 5: left, down, back
	g_vertex_buffer_data[5 * 3 + 0] = -0.5;
	g_vertex_buffer_data[5 * 3 + 1] = -0.5;
	g_vertex_buffer_data[5 * 3 + 2] = 0.5;

	// vertex 6: right, down, back
	g_vertex_buffer_data[6 * 3 + 0] = 0.5;
	g_vertex_buffer_data[6 * 3 + 1] = -0.5;
	g_vertex_buffer_data[6 * 3 + 2] = 0.5;

	// vertex 7: right, down, front
	g_vertex_buffer_data[7 * 3 + 0] = 0.5;
	g_vertex_buffer_data[7 * 3 + 1] = -0.5;
	g_vertex_buffer_data[7 * 3 + 2] = -0.5;

	// triangles 0, 1: front square
	g_element_buffer_data[0 * 3 + 0] = 0;
	g_element_buffer_data[0 * 3 + 1] = 3;
	g_element_buffer_data[0 * 3 + 2] = 7;

	g_element_buffer_data[1 * 3 + 0] = 0;
	g_element_buffer_data[1 * 3 + 1] = 4;
	g_element_buffer_data[1 * 3 + 2] = 7;

	// triangles 2, 3: left square
	g_element_buffer_data[2 * 3 + 0] = 1;
	g_element_buffer_data[2 * 3 + 1] = 0;
	g_element_buffer_data[2 * 3 + 2] = 4;

	g_element_buffer_data[3 * 3 + 0] = 1;
	g_element_buffer_data[3 * 3 + 1] = 5;
	g_element_buffer_data[3 * 3 + 2] = 4;

	// triangles 4, 5: back square
	g_element_buffer_data[4 * 3 + 0] = 2;
	g_element_buffer_data[4 * 3 + 1] = 1;
	g_element_buffer_data[4 * 3 + 2] = 5;

	g_element_buffer_data[5 * 3 + 0] = 2;
	g_element_buffer_data[5 * 3 + 1] = 6;
	g_element_buffer_data[5 * 3 + 2] = 5;

	// triangles 6, 7: on right
	g_element_buffer_data[6 * 3 + 0] = 3;
	g_element_buffer_data[6 * 3 + 1] = 2;
	g_element_buffer_data[6 * 3 + 2] = 6;

	g_element_buffer_data[7 * 3 + 0] = 3;
	g_element_buffer_data[7 * 3 + 1] = 7;
	g_element_buffer_data[7 * 3 + 2] = 6;

	// triangles 8, 9: top square
	g_element_buffer_data[8 * 3 + 0] = 1;
	g_element_buffer_data[8 * 3 + 1] = 2;
	g_element_buffer_data[8 * 3 + 2] = 3;

	g_element_buffer_data[9 * 3 + 0] = 1;
	g_element_buffer_data[9 * 3 + 1] = 0;
	g_element_buffer_data[9 * 3 + 2] = 3;

	// triangles 10, 11: bottom square
	g_element_buffer_data[10 * 3 + 0] = 4;
	g_element_buffer_data[10 * 3 + 1] = 7;
	g_element_buffer_data[10 * 3 + 2] = 6;

	g_element_buffer_data[11 * 3 + 0] = 4;
	g_element_buffer_data[11 * 3 + 1] = 5;
	g_element_buffer_data[11 * 3 + 2] = 6;

	bbox.reset();
	bbox = shared_ptr<BoundingBox>(
			new BoundingBox(Point3(x, y, z), 1.0, 1.0, 1.0));

	make_resources();
}

CubeAsset::~CubeAsset() {
}

void CubeAsset::update() {
}

void CubeAsset::draw() {
	GameAsset::draw();
}
