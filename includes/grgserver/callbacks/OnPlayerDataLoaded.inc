forward OnPlayerDataLoaded(playerID);
public OnPlayerDataLoaded(playerID)
{
	PVar:playerID[LANGUAGE] = GetLanguageID(GetMySQLField("language"));
	PVar:playerID[ISADMIN] = strval(GetMySQLField("isAdmin"));

	ResetPlayerMoney(playerID);
	GivePlayerMoney(playerID, strval(GetMySQLField("money")));

	CreatePlayerTextDraws(playerID);

	SetPlayerSpawn(playerID, SPAWNTYPE_DEFAULT, cache_get_field_content_float(0, "posX"), cache_get_field_content_float(0, "posY"), cache_get_field_content_float(0, "posZ"), cache_get_field_content_float(0, "angle"), cache_get_field_content_int(0, "interior"));
	SpawnPlayer(playerID);
}