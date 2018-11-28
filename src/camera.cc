#include "camera.h"

namespace {
	float pan_speed = 0.005f;
	float roll_speed = 0.1f;
	float rotation_speed = 0.005f;
	float zoom_speed = 0.1f;
};

// FIXME: Calculate the view matrix
glm::mat4 Camera::get_view_matrix() const
{
	glm::vec3 z = glm::normalize(eye_ - center);
	glm::dvec3 norm_up = glm::normalize(up_);
	glm::vec3 x = glm::normalize(glm::cross(up_, z));
	glm::vec3 y = glm::normalize(glm::cross(z, x));

	glm::mat4 result;

	result[0][0] = x.x;
	result[1][0] = x.y;
	result[2][0] = x.z;
	result[0][1] = y.x;
	result[1][1] = y.y;
	result[2][1] = y.z;
	result[0][2] = z.x;
	result[1][2] = z.y;
	result[2][2] = z.z;
	result[0][3] = 0;
	result[1][3] = 0;
	result[2][3] = 0;
	result[3][0] = -glm::dot(x, eye_);
	result[3][1] = -glm::dot(y, eye_);
	result[3][2] = -glm::dot(z, eye_);
	result[3][3] = 1;

	return result;

	// return glm::mat4();
}

void Camera::switch_fps()
{
	if (fps) {
		fps = false;
	}
	else {
		fps = true;
	}
}

bool Camera::get_button_pressed()
{
	return mouse_button;
}

void Camera::set_mouse(double x, double y)
{
	x_pos = x;
	y_pos = y;
}

void Camera::set_button_pressed(bool pressed)
{
	mouse_button = pressed;
}

void Camera::set_pan(char key)
{
	if (key == 'a') {
		center -= glm::normalize(glm::cross(look_, up_)) * pan_speed;
		eye_ -= glm::normalize(glm::cross(look_, up_)) * pan_speed;
	}
	else if (key == 'd') {
		center += glm::normalize(glm::cross(look_, up_)) * pan_speed;
		eye_ += glm::normalize(glm::cross(look_, up_)) * pan_speed;
	}
	else if (key == 'u') {
		center += pan_speed * up_;
		eye_ += pan_speed * up_;
	}
	else if (key == 'x') {
		center -= pan_speed * up_;
		eye_ -= pan_speed * up_;
	}
}

void Camera::set_pan_mouse(double x, double y)
{
	center -= glm::normalize(glm::cross(look_, up_)) * pan_speed * (float) (x_pos - x);
	eye_ -= glm::normalize(glm::cross(look_, up_)) * pan_speed * (float) (x_pos - x);
	center += pan_speed * up_ * (float) (y_pos - y);
	eye_ += pan_speed * up_ * (float) (y_pos - y);
	x_pos = x;
	y_pos = y;
}

void Camera::set_zoom(char key)
{
	if (fps) {
		if (key == 'w') {
			eye_ += look_ * zoom_speed;
			center += look_ * zoom_speed;
		}
		else if (key == 's') {
			eye_ -= look_ * zoom_speed;
			center -= look_ * zoom_speed;
		}
	}
	else {
		if (key == 'w') {
			camera_distance_ = glm::length(center - eye_) - zoom_speed;
			eye_ += zoom_speed * look_;
		}
		else if (key == 's') {
			camera_distance_ = glm::length(center - eye_) + zoom_speed;
			eye_ -= zoom_speed * look_;
		}
	}
}

void Camera::set_zoom_mouse(double y)
{
	eye_ += look_ * zoom_speed * (float) (y_pos - y);
	camera_distance_ = glm::length(center - eye_);
	x_pos = 0.0;
	y_pos = y;
}

void Camera::set_pny(double mouse_x, double mouse_y)
{
	double x_offset = mouse_x - x_pos;
	double y_offset = mouse_y - y_pos;
	x_offset *= rotation_speed;
	y_offset *= rotation_speed;
	x_pos = mouse_x;
	y_pos = mouse_y;

	// yaw += mouse_x;
	// pitch += mouse_y;

	// glm::vec3 front;
	// front.x = cos(glm::radians(pitch)) * cos(glm::radians(yaw));
	// front.y = sin(glm::radians(pitch));
	// front.z = cos(glm::radians(pitch)) * sin(glm::radians(yaw));
	// look_ = glm::normalize(front);

	if (fps) {
		look_ = glm::rotate(look_, (float) x_offset, up_);
		glm::vec3 tangent = glm::normalize(glm::cross(look_, up_));
		look_ = glm::rotate(look_, (float) y_offset, tangent);
		up_ = glm::normalize(glm::cross(look_, -tangent));
		center = look_ * camera_distance_ + eye_;
		look_ = glm::normalize(look_);
	}
	else {
		eye_ = glm::rotate(eye_, (float) x_offset, up_);
		look_ = center - eye_;
		eye_ = glm::rotate(eye_, (float) y_offset, glm::normalize(glm::cross(look_, up_)));
		look_ = center - eye_;
		up_ = glm::normalize(glm::cross(look_, -glm::normalize(glm::cross(look_, up_))));
		look_ = glm::normalize(look_);
	}
}

void Camera::set_roll(char key)
{
	if (key == 'l') {
		up_ = glm::normalize(glm::rotate(up_, -roll_speed, look_));
	}
	else {
		up_ = glm::normalize(glm::rotate(up_, roll_speed, look_));
	}
}