#ifndef CAMERA_H
#define CAMERA_H

#include <glm/glm.hpp>
#include <glm/gtx/rotate_vector.hpp>

class Camera {
public:
	glm::mat4 get_view_matrix() const;
	// FIXME: add functions to manipulate camera objects.
	void set_pan(char);
	void set_roll(char);
	void set_rotation(char);
	void set_zoom(char);
	void set_pny(double, double);
	void set_button_pressed(bool);
	bool get_button_pressed();
	void set_mouse(double, double);
	void set_zoom_mouse(double);
	void set_pan_mouse(double, double);
	void switch_fps();

private:
	float camera_distance_ = 3.0;
	glm::vec3 look_ = glm::vec3(0.0f, 0.0f, -1.0f);
	glm::vec3 up_ = glm::vec3(0.0f, 1.0, 0.0f);
	glm::vec3 eye_ = glm::vec3(0.0f, 0.0f, camera_distance_);
	// Note: you may need additional member variables
	bool fps = false;
	bool mouse_button = true;
	double x_pos = 400;
	double y_pos = 300;
	glm::vec3 center = glm::vec3(0.0f, 0.0f, 0.0f);
	// float pitch = 0.0;
	// float yaw = 0.0;
};

#endif
