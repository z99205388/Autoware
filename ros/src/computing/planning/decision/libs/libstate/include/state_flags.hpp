#ifndef __STATE_FLAGS_HPP__
#define __STATE_FLAGS_HPP__

namespace state_machine
{
enum StateFlags
{
  NULL_STATE = 1ULL << 0,
  START_STATE = 1ULL << 1,
  INITIAL_STATE = 1ULL << 2,
  INITIAL_LOCATEVEHICLE_STATE = 1ULL << 3,
  DRIVE_STATE = 1ULL << 4,
  MISSION_COMPLETE_STATE = 1ULL << 5,
  EMERGENCY_STATE = 1ULL << 6,

  DRIVE_SUB_STATE_START = 1ULL << 10,

  DRIVE_ACC_ACCELERATION_STATE = 1ULL << 11,
  DRIVE_ACC_DECELERATION_STATE = 1ULL << 12,
  DRIVE_ACC_KEEP_STATE = 1ULL << 13,
  DRIVE_ACC_STOP_STATE = 1ULL << 14,
  DRIVE_ACC_STOPLINE_STATE = 1ULL << 15,
  DRIVE_ACC_CRAWL_STATE = 1ULL << 16,

  DRIVE_STR_STRAIGHT_STATE = 1ULL << 21,
  DRIVE_STR_LEFT_STATE = 1ULL << 22,
  DRIVE_STR_RIGHT_STATE = 1ULL << 23,

  DRIVE_BEHAVIOR_LANECHANGE_LEFT_STATE = 1ULL << 31,
  DRIVE_BEHAVIOR_LANECHANGE_RIGHT_STATE = 1ULL << 32,
  DRIVE_BEHAVIOR_OBSTACLE_AVOIDANCE_STATE = 1ULL << 33,
  DRIVE_BEHAVIOR_TRAFFICLIGHT_RED_STATE = 1ULL << 34,
  DRIVE_BEHAVIOR_TRAFFICLIGHT_GREEN_STATE = 1ULL << 35,
  DRIVE_BEHAVIOR_STOPLINE_PLAN_STATE = 1ULL << 36,
  STATE_SUB_END = 1ULL << 40,
  STATE_END = 1ULL << 41,
};

enum StateKinds
{
  MAIN_STATE = 1,
  ACC_STATE = 2,
  STR_STATE = 3,
  BEHAVIOR_STATE = 4,
  PERCEPTION_STATE = 5,
  OTHER_STATE = 6,
  UNKNOWN_STATE = 7,
};

enum TrafficLightColors
{
  E_RED = 0,
  E_YELLOW = 0,
  E_GREEN = 1,
  E_COLOR_ERROR = 2
};
}

#endif
