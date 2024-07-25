#ifndef CHARACTER_UPDATE_HPP
#define CHARACTER_UPDATE_HPP

#include "sbpt_generated_includes.hpp"

void update_player_camera_and_velocity(JPH::Ref<JPH::CharacterVirtual> &character, Camera &camera, Mouse &mouse,
                                       NetworkedInputSnapshot &input_snapshot, float movement_acceleration,
                                       double time_since_last_update, JPH::Vec3 gravity);

#endif //CHARACTER_UPDATE_HPP
