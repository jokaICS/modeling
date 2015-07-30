#     Project: openETCS
#      Module: RBC-System / tests
# Description: provides common helper functions for testing of the SCADE RBC node

# path to the RBC node
set rbc RBC_Model_Pkg::RBC

############################# GET #################################
# Returns the current RBC clock value
proc rbc_get_Clock {} {
  SSM::get "$::rbc/outClock.m_Value"
}

# Returns the current value of the RBC session TrainData structure (or one of its members)
# var: name of the member (optional)
proc rbc_get_TrainData {{var ""}} {
  if {$var eq ""} {
    SSM::get "$::rbc/outSessionManagement.m_TrainData"
  } else {
    SSM::get "$::rbc/outSessionManagement.m_TrainData.$var"
  }
}

# Returns the current value of the RBC session PosData structure (or one of its members)
# var: name of the member (optional)
proc rbc_get_PosData {{var ""}} {
  if {$var eq ""} {
    SSM::get "$::rbc/outSessionManagement.m_PosData"
  } else {
    SSM::get "$::rbc/outSessionManagement.m_PosData.$var"
  }
}

# Returns the value of the current output radio message header (or one of its fields)
# var: name of the header field (optional)
proc rbc_get_OutMsgHeader {{var ""}} {
  if {$var eq ""} {
    SSM::get "$::rbc/outRadioTrackTrainMessage.Header"
  } else {
    SSM::get "$::rbc/outRadioTrackTrainMessage.Header.$var"
  }
}


############################# SET #################################
# Assign new values to RBC/inRadioTrainTrackMsg.header
proc rbc_set_InMsgHeader {present nid_message t_train nid_engine} {
  set h "$::rbc/inRadioTrainTrackMsg.header"
  SSM::set "$h.present" $present
  SSM::set "$h.nid_message" $nid_message
  SSM::set "$h.t_train" $t_train
  SSM::set "$h.nid_engine" $nid_engine  
}

proc rbc_set_InMsg_None {} {
  SSM::set "$::rbc/inRadioTrainTrackMsg.present" false
}

# Input MSG 154 (No compatible version supported)
proc rbc_set_InMsg_154 {t_train nid_engine} {
  SSM::set "$::rbc/inRadioTrainTrackMsg.present" true
  rbc_set_InMsgHeader true 154 $t_train $nid_engine
}

# Input MSG 155 (Initiation of Communication)
proc rbc_set_InMsg_155 {t_train nid_engine} {
  SSM::set "$::rbc/inRadioTrainTrackMsg.present" true
  rbc_set_InMsgHeader true 155 $t_train $nid_engine
}


############################# CHECK #################################
proc rbc_check_struct {path checks} {
  foreach {var val} $checks {
    SSM::check "$path.$var" "$val"
  }
}

proc rbc_check_PosData {checks} {
  rbc_check_struct "$::rbc/outSessionManagement.m_PosData" "$checks"
}

proc rbc_check_TrainData {checks} {
  rbc_check_struct "$::rbc/outSessionManagement.m_TrainData" "$checks"
}

proc rbc_check_OutMsgHeader {checks} {
  rbc_check_struct "$::rbc/outRadioTrackTrainMessage.Header" "$checks"
}

proc rbc_check_OutMsg_None {{cycles 1}} {
  SSM::check "$::rbc/outRadioTrackTrainMessage.Header.nid_message" 0 sustain=$cycles
}

proc rbc_check_OutMsg_32 {{t_train 20} {m_version 15}} {
  rbc_check_OutMsgHeader [list nid_message 32\
                          nid_lrbg $::const::NID_LRBG_UNKNOWN\
                          m_ack $::const::M_ACK_No_acknowledgement_required\
                          m_version $m_version\
                          t_train $t_train]
}
