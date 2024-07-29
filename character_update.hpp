#ifndef CHARACTER_UPDATE_HPP
#define CHARACTER_UPDATE_HPP

#include "sbpt_generated_includes.hpp"

std::function<void(double)> update_player_camera_and_velocity_closure(JPH::Ref<JPH::CharacterVirtual> &character,
                                                                      Camera &camera, Mouse &mouse,
                                                                      NetworkedInputSnapshot &input_snapshot,
                                                                      float &movement_acceleration, JPH::Vec3 &gravity);

#endif // CHARACTER_UPDATE_HPP
