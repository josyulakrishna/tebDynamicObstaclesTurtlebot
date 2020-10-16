#include <gazebo/gazebo.hh>
#include <ignition/math.hh>
#include <gazebo/physics/physics.hh>
#include <gazebo/common/common.hh>
#include <stdio.h>

namespace gazebo
{
  class AnimatedBox11 : public ModelPlugin
  {
    public: void Load(physics::ModelPtr _parent, sdf::ElementPtr /*_sdf*/)
    {
      // Store the pointer to the model
      this->model = _parent;

        // create the animation
        gazebo::common::PoseAnimationPtr anim(
              // name the animation "test",
              // make it last 10 seconds,
              // and set it on a repeat loop
              new gazebo::common::PoseAnimation("test", 12.0, true));

        gazebo::common::PoseKeyFrame *key;

        // set starting location of the box
        key = anim->CreateKeyFrame(0);
        key->Translation(ignition::math::Vector3d(-0.18, -1.57, 0));
        key->Rotation(ignition::math::Quaterniond(0, 0, 0));

        // set waypoint location after 2 seconds
        key = anim->CreateKeyFrame(2.0);
        key->Translation(ignition::math::Vector3d(-0.18, -1.27, 0));
        key->Rotation(ignition::math::Quaterniond(0, 0, 0));


        key = anim->CreateKeyFrame(4.0);
        key->Translation(ignition::math::Vector3d(-0.18, -1.00, 0));
        key->Rotation(ignition::math::Quaterniond(0, 0, 0));


        key = anim->CreateKeyFrame(6.0);
        key->Translation(ignition::math::Vector3d(-0.18, -0.57, 0));
        key->Rotation(ignition::math::Quaterniond(0, 0, 0));


        key = anim->CreateKeyFrame(8.0);
        key->Translation(ignition::math::Vector3d(-0.18, 0.00, 0));
        key->Rotation(ignition::math::Quaterniond(0, 0, 0));

        key = anim->CreateKeyFrame(10.0);
        key->Translation(ignition::math::Vector3d(-0.18, .57, 0));
        key->Rotation(ignition::math::Quaterniond(0, 0, 0));
        
        key = anim->CreateKeyFrame(12.0);
        key->Translation(ignition::math::Vector3d(-0.18, 1.00, 0));
        key->Rotation(ignition::math::Quaterniond(0, 0, 0));

	key = anim->CreateKeyFrame(14.0);
        key->Translation(ignition::math::Vector3d(-0.18, 1.42, 0));
        key->Rotation(ignition::math::Quaterniond(0, 0, 0));

	key = anim->CreateKeyFrame(16.0);
        key->Translation(ignition::math::Vector3d(-0.18, 1.22, 0));
        key->Rotation(ignition::math::Quaterniond(0, 0, 0));

	key = anim->CreateKeyFrame(18.0);
        key->Translation(ignition::math::Vector3d(-0.18, 1.00, 0));
        key->Rotation(ignition::math::Quaterniond(0, 0, 0));

	key = anim->CreateKeyFrame(18.0);
        key->Translation(ignition::math::Vector3d(-0.18, 0.50, 0));
        key->Rotation(ignition::math::Quaterniond(0, 0, 0));

	key = anim->CreateKeyFrame(20.0);
        key->Translation(ignition::math::Vector3d(-0.18, 0.00, 0));
        key->Rotation(ignition::math::Quaterniond(0, 0, 0));


	key = anim->CreateKeyFrame(22.0);
        key->Translation(ignition::math::Vector3d(-0.18, -0.50, 0));
        key->Rotation(ignition::math::Quaterniond(0, 0, 0));


	key = anim->CreateKeyFrame(24.0);
        key->Translation(ignition::math::Vector3d(-0.18, -1.00, 0));
        key->Rotation(ignition::math::Quaterniond(0, 0, 0));


	key = anim->CreateKeyFrame(26.0);
        key->Translation(ignition::math::Vector3d(-0.18, -1.57, 0));
        key->Rotation(ignition::math::Quaterniond(0, 0, 0));

        // set the animation
        _parent->SetAnimation(anim);
    }

    // Pointer to the model
    private: physics::ModelPtr model;

    // Pointer to the update event connection
    private: event::ConnectionPtr updateConnection;
  };

  // Register this plugin with the simulator
  GZ_REGISTER_MODEL_PLUGIN(AnimatedBox11)
}
