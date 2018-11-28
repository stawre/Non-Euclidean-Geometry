#include "menger.h"
#include <iostream>
namespace {
	const int kMinLevel = 0;
	const int kMaxLevel = 4;
};

Menger::Menger()
{
	// Add additional initialization if you like
}

Menger::~Menger()
{
}

void
Menger::set_nesting_level(int level)
{
	nesting_level_ = level;
	dirty_ = true;
}

bool
Menger::is_dirty() const
{
	return dirty_;
}

void
Menger::set_clean()
{
	dirty_ = false;
}

// FIXME generate Menger sponge geometry
void
Menger::generate_geometry(std::vector<glm::vec4>& obj_vertices,
			  std::vector<glm::vec4>& vtx_normals,
                          std::vector<glm::uvec3>& obj_faces) const
{
	if (dirty_) {
		obj_vertices.clear();
		vtx_normals.clear();
		obj_faces.clear();
	}
	
	
	double x = -0.5;
	double y = -0.5;
	double z = -0.5;
	double cube_size = 1.0;
	int curr = 0;
	//front face
	obj_vertices.push_back(glm::vec4(x, y, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, -1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size, y, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, -1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size, y + cube_size/8, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, -1.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

	obj_vertices.push_back(glm::vec4(x, y, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, -1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x, y + cube_size/8, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, -1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size, y + cube_size/8, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, -1.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

	obj_vertices.push_back(glm::vec4(x, y + cube_size/8*7, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, -1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x, y + cube_size, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, -1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size, y + cube_size, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, -1.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

	obj_vertices.push_back(glm::vec4(x + cube_size, y + cube_size, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, -1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x, y + cube_size/8 * 7, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, -1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size, y + cube_size/8 * 7, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, -1.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

	obj_vertices.push_back(glm::vec4(x, y, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, -1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x, y + cube_size, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, -1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size/8, y + cube_size, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, -1.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

	obj_vertices.push_back(glm::vec4(x, y, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, -1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size/8, y + cube_size, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, -1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size/8, y, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, -1.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

	obj_vertices.push_back(glm::vec4(x + cube_size/8*7, y, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, -1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size/8*7, y + cube_size, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, -1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size, y + cube_size, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, -1.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

	obj_vertices.push_back(glm::vec4(x + cube_size/8*7, y, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, -1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size, y + cube_size, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, -1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size, y, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, -1.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

	//back face

	obj_vertices.push_back(glm::vec4(x, y, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size, y, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size, y + cube_size/8, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

	obj_vertices.push_back(glm::vec4(x, y, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x, y + cube_size/8, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size, y + cube_size/8, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

	obj_vertices.push_back(glm::vec4(x, y + cube_size/8*7, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x, y + cube_size, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size, y + cube_size, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

	obj_vertices.push_back(glm::vec4(x + cube_size, y + cube_size, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x, y + cube_size/8 * 7, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size, y + cube_size/8 * 7, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

	obj_vertices.push_back(glm::vec4(x, y, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x, y + cube_size, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size/8, y + cube_size, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

	obj_vertices.push_back(glm::vec4(x, y, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size/8, y + cube_size, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size/8, y, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

	obj_vertices.push_back(glm::vec4(x + cube_size/8*7, y, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size/8*7, y + cube_size, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size, y + cube_size, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

	obj_vertices.push_back(glm::vec4(x + cube_size/8*7, y, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size, y + cube_size, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size, y, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

	//top face

	obj_vertices.push_back(glm::vec4(x, y + cube_size, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 1.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x, y + cube_size, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 1.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size, y + cube_size, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 1.0f, 0.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

	obj_vertices.push_back(glm::vec4(x, y + cube_size, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 1.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size, y + cube_size, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 1.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size, y + cube_size, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 1.0f, 0.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));


	obj_vertices.push_back(glm::vec4(x, y + cube_size/8, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 1.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x, y + cube_size/8, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 1.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size, y + cube_size/8, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 1.0f, 0.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

	obj_vertices.push_back(glm::vec4(x, y + cube_size/8, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 1.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size, y + cube_size/8, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 1.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size, y + cube_size/8, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, 1.0f, 0.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

	//bottom face
	
	obj_vertices.push_back(glm::vec4(x, y, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, -1.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x, y, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, -1.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size, y, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, -1.0f, 0.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

	obj_vertices.push_back(glm::vec4(x, y, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, -1.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size, y, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, -1.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size, y, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, -1.0f, 0.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

	obj_vertices.push_back(glm::vec4(x, y + cube_size/8*7, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, -1.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x, y + cube_size/8*7, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, -1.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size, y + cube_size/8*7, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, -1.0f, 0.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

	obj_vertices.push_back(glm::vec4(x, y + cube_size/8*7, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, -1.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size, y + cube_size/8*7, z, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, -1.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size, y + cube_size/8*7, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(0.0f, -1.0f, 0.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

	//left face
	obj_vertices.push_back(glm::vec4(x, y, z, 1.0f));
	vtx_normals.push_back(glm::vec4(-1.0f, 0.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x, y + cube_size, z, 1.0f));
	vtx_normals.push_back(glm::vec4(-1.0f, 0.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x, y + cube_size, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(-1.0f, 0.0f, 0.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

	obj_vertices.push_back(glm::vec4(x, y, z, 1.0f));
	vtx_normals.push_back(glm::vec4(-1.0f, 0.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x, y, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(-1.0f, 0.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x, y + cube_size, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(-1.0f, 0.0f, 0.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

	obj_vertices.push_back(glm::vec4(x + cube_size/8*7, y, z, 1.0f));
	vtx_normals.push_back(glm::vec4(-1.0f, 0.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size/8*7, y + cube_size, z, 1.0f));
	vtx_normals.push_back(glm::vec4(-1.0f, 0.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size/8*7, y + cube_size, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(-1.0f, 0.0f, 0.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

	obj_vertices.push_back(glm::vec4(x + cube_size/8*7, y, z, 1.0f));
	vtx_normals.push_back(glm::vec4(-1.0f, 0.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size/8*7, y, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(-1.0f, 0.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size/8*7, y + cube_size, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(-1.0f, 0.0f, 0.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

	//right face

	obj_vertices.push_back(glm::vec4(x + cube_size, y, z, 1.0f));
	vtx_normals.push_back(glm::vec4(1.0f, 0.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size, y + cube_size, z, 1.0f));
	vtx_normals.push_back(glm::vec4(1.0f, 0.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size, y + cube_size, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(1.0f, 0.0f, 0.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

	obj_vertices.push_back(glm::vec4(x + cube_size, y, z, 1.0f));
	vtx_normals.push_back(glm::vec4(1.0f, 0.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size, y, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(1.0f, 0.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size, y + cube_size, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(1.0f, 0.0f, 0.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

	obj_vertices.push_back(glm::vec4(x + cube_size/8, y, z, 1.0f));
	vtx_normals.push_back(glm::vec4(1.0f, 0.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size/8, y + cube_size, z, 1.0f));
	vtx_normals.push_back(glm::vec4(1.0f, 0.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size/8, y + cube_size, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(1.0f, 0.0f, 0.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

	obj_vertices.push_back(glm::vec4(x + cube_size/8, y, z, 1.0f));
	vtx_normals.push_back(glm::vec4(1.0f, 0.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size/8, y, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(1.0f, 0.0f, 0.0f, 0.0f));
	obj_vertices.push_back(glm::vec4(x + cube_size/8, y + cube_size, z + cube_size, 1.0f));
	vtx_normals.push_back(glm::vec4(1.0f, 0.0f, 0.0f, 0.0f));
	obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));
}

int 
Menger::menger_aux(std::vector<glm::vec4>& obj_vertices,
					std::vector<glm::vec4>& vtx_normals,
						std::vector<glm::uvec3>& obj_faces,
						double starting_x,
							double starting_y,
								double starting_z,
									double cube_size,
										int level,
											int curr) const {
	double x;
	double y;
	double z;
	for (int i = 0; i <= 2; i++) {
		for (int j = 0; j <= 2; j++) {
			for (int k = 0; k <= 2; k++) {
				if ((i % 2) + (j % 2) + (k % 2) <= 1) {
					x = i*cube_size + starting_x;
					y = j*cube_size + starting_y;
					z = k*cube_size + starting_z;
					if (level >= 2) {
						curr = menger_aux(obj_vertices, vtx_normals, obj_faces, x, y, z, cube_size/3, level-1, curr);
					}
					else {
						//front face
						obj_vertices.push_back(glm::vec4(x, y, z, 1.0f));
						vtx_normals.push_back(glm::vec4(0.0f, 0.0f, -1.0f, 0.0f));
						obj_vertices.push_back(glm::vec4(x + cube_size, y, z, 1.0f));
						vtx_normals.push_back(glm::vec4(0.0f, 0.0f, -1.0f, 0.0f));
						obj_vertices.push_back(glm::vec4(x + cube_size, y + cube_size, z, 1.0f));
						vtx_normals.push_back(glm::vec4(0.0f, 0.0f, -1.0f, 0.0f));
						obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

						obj_vertices.push_back(glm::vec4(x, y, z, 1.0f));
						vtx_normals.push_back(glm::vec4(0.0f, 0.0f, -1.0f, 0.0f));
						obj_vertices.push_back(glm::vec4(x, y + cube_size, z, 1.0f));
						vtx_normals.push_back(glm::vec4(0.0f, 0.0f, -1.0f, 0.0f));
						obj_vertices.push_back(glm::vec4(x + cube_size, y + cube_size, z, 1.0f));
						vtx_normals.push_back(glm::vec4(0.0f, 0.0f, -1.0f, 0.0f));
						obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

						//back face

						obj_vertices.push_back(glm::vec4(x, y, z + cube_size, 1.0f));
						vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
						obj_vertices.push_back(glm::vec4(x + cube_size, y, z + cube_size, 1.0f));
						vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
						obj_vertices.push_back(glm::vec4(x + cube_size, y + cube_size, z + cube_size, 1.0f));
						vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
						obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

						obj_vertices.push_back(glm::vec4(x, y, z + cube_size, 1.0f));
						vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
						obj_vertices.push_back(glm::vec4(x, y + cube_size, z + cube_size, 1.0f));
						vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
						obj_vertices.push_back(glm::vec4(x + cube_size, y + cube_size, z + cube_size, 1.0f));
						vtx_normals.push_back(glm::vec4(0.0f, 0.0f, 1.0f, 0.0f));
						obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

						//top face

						obj_vertices.push_back(glm::vec4(x, y + cube_size, z, 1.0f));
						vtx_normals.push_back(glm::vec4(0.0f, 1.0f, 0.0f, 0.0f));
						obj_vertices.push_back(glm::vec4(x, y + cube_size, z + cube_size, 1.0f));
						vtx_normals.push_back(glm::vec4(0.0f, 1.0f, 0.0f, 0.0f));
						obj_vertices.push_back(glm::vec4(x + cube_size, y + cube_size, z + cube_size, 1.0f));
						vtx_normals.push_back(glm::vec4(0.0f, 1.0f, 0.0f, 0.0f));
						obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

						obj_vertices.push_back(glm::vec4(x, y + cube_size, z, 1.0f));
						vtx_normals.push_back(glm::vec4(0.0f, 1.0f, 0.0f, 0.0f));
						obj_vertices.push_back(glm::vec4(x + cube_size, y + cube_size, z, 1.0f));
						vtx_normals.push_back(glm::vec4(0.0f, 1.0f, 0.0f, 0.0f));
						obj_vertices.push_back(glm::vec4(x + cube_size, y + cube_size, z + cube_size, 1.0f));
						vtx_normals.push_back(glm::vec4(0.0f, 1.0f, 0.0f, 0.0f));
						obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

						//bottom face
						
						obj_vertices.push_back(glm::vec4(x, y, z, 1.0f));
						vtx_normals.push_back(glm::vec4(0.0f, -1.0f, 0.0f, 0.0f));
						obj_vertices.push_back(glm::vec4(x, y, z + cube_size, 1.0f));
						vtx_normals.push_back(glm::vec4(0.0f, -1.0f, 0.0f, 0.0f));
						obj_vertices.push_back(glm::vec4(x + cube_size, y, z + cube_size, 1.0f));
						vtx_normals.push_back(glm::vec4(0.0f, -1.0f, 0.0f, 0.0f));
						obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

						obj_vertices.push_back(glm::vec4(x, y, z, 1.0f));
						vtx_normals.push_back(glm::vec4(0.0f, -1.0f, 0.0f, 0.0f));
						obj_vertices.push_back(glm::vec4(x + cube_size, y, z, 1.0f));
						vtx_normals.push_back(glm::vec4(0.0f, -1.0f, 0.0f, 0.0f));
						obj_vertices.push_back(glm::vec4(x + cube_size, y, z + cube_size, 1.0f));
						vtx_normals.push_back(glm::vec4(0.0f, -1.0f, 0.0f, 0.0f));
						obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

						//left face
						obj_vertices.push_back(glm::vec4(x, y, z, 1.0f));
						vtx_normals.push_back(glm::vec4(-1.0f, 0.0f, 0.0f, 0.0f));
						obj_vertices.push_back(glm::vec4(x, y + cube_size, z, 1.0f));
						vtx_normals.push_back(glm::vec4(-1.0f, 0.0f, 0.0f, 0.0f));
						obj_vertices.push_back(glm::vec4(x, y + cube_size, z + cube_size, 1.0f));
						vtx_normals.push_back(glm::vec4(-1.0f, 0.0f, 0.0f, 0.0f));
						obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

						obj_vertices.push_back(glm::vec4(x, y, z, 1.0f));
						vtx_normals.push_back(glm::vec4(-1.0f, 0.0f, 0.0f, 0.0f));
						obj_vertices.push_back(glm::vec4(x, y, z + cube_size, 1.0f));
						vtx_normals.push_back(glm::vec4(-1.0f, 0.0f, 0.0f, 0.0f));
						obj_vertices.push_back(glm::vec4(x, y + cube_size, z + cube_size, 1.0f));
						vtx_normals.push_back(glm::vec4(-1.0f, 0.0f, 0.0f, 0.0f));
						obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

						//right face

						obj_vertices.push_back(glm::vec4(x + cube_size, y, z, 1.0f));
						vtx_normals.push_back(glm::vec4(1.0f, 0.0f, 0.0f, 0.0f));
						obj_vertices.push_back(glm::vec4(x + cube_size, y + cube_size, z, 1.0f));
						vtx_normals.push_back(glm::vec4(1.0f, 0.0f, 0.0f, 0.0f));
						obj_vertices.push_back(glm::vec4(x + cube_size, y + cube_size, z + cube_size, 1.0f));
						vtx_normals.push_back(glm::vec4(1.0f, 0.0f, 0.0f, 0.0f));
						obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

						obj_vertices.push_back(glm::vec4(x + cube_size, y, z, 1.0f));
						vtx_normals.push_back(glm::vec4(1.0f, 0.0f, 0.0f, 0.0f));
						obj_vertices.push_back(glm::vec4(x + cube_size, y, z + cube_size, 1.0f));
						vtx_normals.push_back(glm::vec4(1.0f, 0.0f, 0.0f, 0.0f));
						obj_vertices.push_back(glm::vec4(x + cube_size, y + cube_size, z + cube_size, 1.0f));
						vtx_normals.push_back(glm::vec4(1.0f, 0.0f, 0.0f, 0.0f));
						obj_faces.push_back(glm::uvec3(curr++, curr++, curr++));

					}
				}
			} 
		}
	}
	return curr;


}
