Timer:EnterVehicleShopSpawn(playerID)
{
	SetPlayerCameraLookAt(playerID, SHOP_VEHICLE_CAM_POSX, SHOP_VEHICLE_CAM_POSY, SHOP_VEHICLE_CAM_POSZ);
	SetPlayerCameraPos(playerID, SHOP_VEHICLE_CAM_POSX, SHOP_VEHICLE_CAM_POSY, SHOP_VEHICLE_CAM_POSZ);
	SetPlayerCameraLookAt(playerID, SHOP_VEHICLE_VEH_POSX, SHOP_VEHICLE_VEH_POSY, SHOP_VEHICLE_VEH_POSZ);
}