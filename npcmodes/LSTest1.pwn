#include "a_npc"
#define RECORDING "LSTest1"

main()
{
}

public OnRecordingPlaybackEnd()
{
	StartRecordingPlayback(1, RECORDING);
}

public OnNPCEnterVehicle(vehicleid, seatid)
{
	StartRecordingPlayback(1, RECORDING);
}
public OnNPCExitVehicle()
{
	StopRecordingPlayback();
}