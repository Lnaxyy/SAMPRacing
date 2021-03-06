CreatePlayerTextDraws(playerID)
{
    // Drifting bottom line
    g_playerTextDraws[playerID][E_PTD_DRIFTING_BOTTOM] = CreatePlayerTextDraw(playerID, 320, 425, " ");
    PlayerTextDrawAlignment(playerID, g_playerTextDraws[playerID][E_PTD_DRIFTING_BOTTOM], 2);
    PlayerTextDrawFont(playerID, g_playerTextDraws[playerID][E_PTD_DRIFTING_BOTTOM], 1);
    PlayerTextDrawLetterSize(playerID, g_playerTextDraws[playerID][E_PTD_DRIFTING_BOTTOM], 0.4, 0.8);
    PlayerTextDrawUseBox(playerID, g_playerTextDraws[playerID][E_PTD_DRIFTING_BOTTOM], true);
    PlayerTextDrawBoxColor(playerID, g_playerTextDraws[playerID][E_PTD_DRIFTING_BOTTOM], 0x00000066);

    // Drifting bonus box
    g_playerTextDraws[playerID][E_PTD_DRIFTING_BONUS_LABELS] = CreatePlayerTextDraw(playerID, 480, 400, " ");
    PlayerTextDrawTextSize(playerID, g_playerTextDraws[playerID][E_PTD_DRIFTING_BONUS_LABELS], 640, 0);
    PlayerTextDrawFont(playerID, g_playerTextDraws[playerID][E_PTD_DRIFTING_BONUS_LABELS], 1);
    PlayerTextDrawLetterSize(playerID, g_playerTextDraws[playerID][E_PTD_DRIFTING_BONUS_LABELS], 0.4, 0.8);
    PlayerTextDrawUseBox(playerID, g_playerTextDraws[playerID][E_PTD_DRIFTING_BONUS_LABELS], true);
    PlayerTextDrawBoxColor(playerID, g_playerTextDraws[playerID][E_PTD_DRIFTING_BONUS_LABELS], 0xff000066);

    // Drifting bonus values
    g_playerTextDraws[playerID][E_PTD_DRIFTING_BONUS_VALUES] = CreatePlayerTextDraw(playerID, 580, 400, " ");
    PlayerTextDrawFont(playerID, g_playerTextDraws[playerID][E_PTD_DRIFTING_BONUS_VALUES], 1);
    PlayerTextDrawLetterSize(playerID, g_playerTextDraws[playerID][E_PTD_DRIFTING_BONUS_VALUES], 0.4, 0.8);

    // Garage control info
    g_playerTextDraws[playerID][E_PTD_GARAGE_CTRL_INFO] = CreatePlayerTextDraw(playerID, 500, 375, " ");
    PlayerTextDrawFont(playerID, g_playerTextDraws[playerID][E_PTD_GARAGE_CTRL_INFO], 1);
    PlayerTextDrawLetterSize(playerID, g_playerTextDraws[playerID][E_PTD_GARAGE_CTRL_INFO], 0.4, 0.8);
    PlayerTextDrawUseBox(playerID, g_playerTextDraws[playerID][E_PTD_GARAGE_CTRL_INFO], true);
    PlayerTextDrawBoxColor(playerID, g_playerTextDraws[playerID][E_PTD_GARAGE_CTRL_INFO], 0x00000066);

    // Garage vehicle info
    g_playerTextDraws[playerID][E_PTD_GARAGE_VEHICLE_INFO] = CreatePlayerTextDraw(playerID, 320, 425, " ");
    PlayerTextDrawAlignment(playerID, g_playerTextDraws[playerID][E_PTD_GARAGE_VEHICLE_INFO], 2);
    PlayerTextDrawFont(playerID, g_playerTextDraws[playerID][E_PTD_GARAGE_VEHICLE_INFO], 1);
    PlayerTextDrawLetterSize(playerID, g_playerTextDraws[playerID][E_PTD_GARAGE_VEHICLE_INFO], 0.4, 0.8);
    PlayerTextDrawUseBox(playerID, g_playerTextDraws[playerID][E_PTD_GARAGE_VEHICLE_INFO], true);
    PlayerTextDrawBoxColor(playerID, g_playerTextDraws[playerID][E_PTD_GARAGE_VEHICLE_INFO], 0x00000066);

    // Object editor info
    g_playerTextDraws[playerID][E_PTD_OBJEDITOR_INFO] = CreatePlayerTextDraw(playerID, 320, 425, " ");
    PlayerTextDrawAlignment(playerID, g_playerTextDraws[playerID][E_PTD_OBJEDITOR_INFO], 2);
    PlayerTextDrawFont(playerID, g_playerTextDraws[playerID][E_PTD_OBJEDITOR_INFO], 1);
    PlayerTextDrawLetterSize(playerID, g_playerTextDraws[playerID][E_PTD_OBJEDITOR_INFO], 0.4, 0.8);
    PlayerTextDrawUseBox(playerID, g_playerTextDraws[playerID][E_PTD_OBJEDITOR_INFO], true);
    PlayerTextDrawBoxColor(playerID, g_playerTextDraws[playerID][E_PTD_OBJEDITOR_INFO], 0x00000066);

    // Race bottom line
    g_playerTextDraws[playerID][E_PTD_RACE_BOTTOM] = CreatePlayerTextDraw(playerID, 320, 425, " ");
    PlayerTextDrawAlignment(playerID, g_playerTextDraws[playerID][E_PTD_RACE_BOTTOM], 2);
    PlayerTextDrawFont(playerID, g_playerTextDraws[playerID][E_PTD_RACE_BOTTOM], 1);
    PlayerTextDrawLetterSize(playerID, g_playerTextDraws[playerID][E_PTD_RACE_BOTTOM], 0.4, 0.8);
    PlayerTextDrawUseBox(playerID, g_playerTextDraws[playerID][E_PTD_RACE_BOTTOM], true);
    PlayerTextDrawBoxColor(playerID, g_playerTextDraws[playerID][E_PTD_RACE_BOTTOM], 0x00000066);

    // Race lobby background
    g_playerTextDraws[playerID][E_PTD_RACELOBBY_BACKGROUND] = CreatePlayerTextDraw(playerID, 150, 120, "~n~");
    PlayerTextDrawLetterSize(playerID, g_playerTextDraws[playerID][E_PTD_RACELOBBY_BACKGROUND], 0, 25);
    PlayerTextDrawTextSize(playerID, g_playerTextDraws[playerID][E_PTD_RACELOBBY_BACKGROUND], 490, 0);
    PlayerTextDrawUseBox(playerID, g_playerTextDraws[playerID][E_PTD_RACELOBBY_BACKGROUND], true);
    PlayerTextDrawBoxColor(playerID, g_playerTextDraws[playerID][E_PTD_RACELOBBY_BACKGROUND], 0x00000066);

    // Race lobby title
    g_playerTextDraws[playerID][E_PTD_RACELOBBY_TITLE] = CreatePlayerTextDraw(playerID, 150, 100, " ");
    PlayerTextDrawFont(playerID, g_playerTextDraws[playerID][E_PTD_RACELOBBY_TITLE], 0);
    PlayerTextDrawLetterSize(playerID, g_playerTextDraws[playerID][E_PTD_RACELOBBY_TITLE], 1.25, 3);

    // Race lobby header1 (Player list)
    g_playerTextDraws[playerID][E_PTD_RACELOBBY_HEADER1] = CreatePlayerTextDraw(playerID, 160, 145, " ");
    PlayerTextDrawAlignment(playerID, g_playerTextDraws[playerID][E_PTD_RACELOBBY_HEADER1], 1);
    PlayerTextDrawFont(playerID, g_playerTextDraws[playerID][E_PTD_RACELOBBY_HEADER1], 1);
    PlayerTextDrawLetterSize(playerID, g_playerTextDraws[playerID][E_PTD_RACELOBBY_HEADER1], 0.4, 0.8);

    // Race lobby header2 (Vehicle list)
    g_playerTextDraws[playerID][E_PTD_RACELOBBY_HEADER2] = CreatePlayerTextDraw(playerID, 320, 145, " ");
    PlayerTextDrawAlignment(playerID, g_playerTextDraws[playerID][E_PTD_RACELOBBY_HEADER2], 2);
    PlayerTextDrawFont(playerID, g_playerTextDraws[playerID][E_PTD_RACELOBBY_HEADER2], 1);
    PlayerTextDrawLetterSize(playerID, g_playerTextDraws[playerID][E_PTD_RACELOBBY_HEADER2], 0.4, 0.8);

    // Race lobby header3 (Level list)
    g_playerTextDraws[playerID][E_PTD_RACELOBBY_HEADER3] = CreatePlayerTextDraw(playerID, 480, 145, " ");
    PlayerTextDrawAlignment(playerID, g_playerTextDraws[playerID][E_PTD_RACELOBBY_HEADER3], 3);
    PlayerTextDrawFont(playerID, g_playerTextDraws[playerID][E_PTD_RACELOBBY_HEADER3], 1);
    PlayerTextDrawLetterSize(playerID, g_playerTextDraws[playerID][E_PTD_RACELOBBY_HEADER3], 0.4, 0.8);

    // Race lobby player list
    g_playerTextDraws[playerID][E_PTD_RACELOBBY_PLAYERLIST] = CreatePlayerTextDraw(playerID, 160, 165, " ");
    PlayerTextDrawAlignment(playerID, g_playerTextDraws[playerID][E_PTD_RACELOBBY_PLAYERLIST], 1);
    PlayerTextDrawFont(playerID, g_playerTextDraws[playerID][E_PTD_RACELOBBY_PLAYERLIST], 1);
    PlayerTextDrawLetterSize(playerID, g_playerTextDraws[playerID][E_PTD_RACELOBBY_PLAYERLIST], 0.4, 0.8);

    // Race lobby vehicle list
    g_playerTextDraws[playerID][E_PTD_RACELOBBY_VEHICLELIST] = CreatePlayerTextDraw(playerID, 320, 165, " ");
    PlayerTextDrawAlignment(playerID, g_playerTextDraws[playerID][E_PTD_RACELOBBY_VEHICLELIST], 2);
    PlayerTextDrawFont(playerID, g_playerTextDraws[playerID][E_PTD_RACELOBBY_VEHICLELIST], 1);
    PlayerTextDrawLetterSize(playerID, g_playerTextDraws[playerID][E_PTD_RACELOBBY_VEHICLELIST], 0.4, 0.8);

    // Race lobby level list
    g_playerTextDraws[playerID][E_PTD_RACELOBBY_LEVELLIST] = CreatePlayerTextDraw(playerID, 480, 165, " ");
    PlayerTextDrawAlignment(playerID, g_playerTextDraws[playerID][E_PTD_RACELOBBY_LEVELLIST], 3);
    PlayerTextDrawFont(playerID, g_playerTextDraws[playerID][E_PTD_RACELOBBY_LEVELLIST], 1);
    PlayerTextDrawLetterSize(playerID, g_playerTextDraws[playerID][E_PTD_RACELOBBY_LEVELLIST], 0.4, 0.8);

    // Race lobby start button
    g_playerTextDraws[playerID][E_PTD_RACELOBBY_BUTTON_START] = CreatePlayerTextDraw(playerID, 200, 360, " ");
    PlayerTextDrawAlignment(playerID, g_playerTextDraws[playerID][E_PTD_RACELOBBY_BUTTON_START], 2);
    PlayerTextDrawFont(playerID, g_playerTextDraws[playerID][E_PTD_RACELOBBY_BUTTON_START], 1);
    PlayerTextDrawLetterSize(playerID, g_playerTextDraws[playerID][E_PTD_RACELOBBY_BUTTON_START], 0.4, 0.8);
    PlayerTextDrawTextSize(playerID, g_playerTextDraws[playerID][E_PTD_RACELOBBY_BUTTON_START], 10, 100);
    PlayerTextDrawUseBox(playerID, g_playerTextDraws[playerID][E_PTD_RACELOBBY_BUTTON_START], true);
    PlayerTextDrawBoxColor(playerID, g_playerTextDraws[playerID][E_PTD_RACELOBBY_BUTTON_START], 0x00000066);
    PlayerTextDrawSetSelectable(playerID, g_playerTextDraws[playerID][E_PTD_RACELOBBY_BUTTON_START], true);

    // Race lobby leave button
    g_playerTextDraws[playerID][E_PTD_RACELOBBY_BUTTON_LEAVE] = CreatePlayerTextDraw(playerID, 440, 360, " ");
    PlayerTextDrawAlignment(playerID, g_playerTextDraws[playerID][E_PTD_RACELOBBY_BUTTON_LEAVE], 2);
    PlayerTextDrawFont(playerID, g_playerTextDraws[playerID][E_PTD_RACELOBBY_BUTTON_LEAVE], 1);
    PlayerTextDrawLetterSize(playerID, g_playerTextDraws[playerID][E_PTD_RACELOBBY_BUTTON_LEAVE], 0.4, 0.8);
    PlayerTextDrawTextSize(playerID, g_playerTextDraws[playerID][E_PTD_RACELOBBY_BUTTON_LEAVE], 10, 100);
    PlayerTextDrawUseBox(playerID, g_playerTextDraws[playerID][E_PTD_RACELOBBY_BUTTON_LEAVE], true);
    PlayerTextDrawBoxColor(playerID, g_playerTextDraws[playerID][E_PTD_RACELOBBY_BUTTON_LEAVE], 0x00000066);
    PlayerTextDrawSetSelectable(playerID, g_playerTextDraws[playerID][E_PTD_RACELOBBY_BUTTON_LEAVE], true);

    // Screen fader
    g_playerTextDraws[playerID][E_PTD_SCREENFADER] = CreatePlayerTextDraw(playerID, 0, 0, "~n~");
    PlayerTextDrawLetterSize(playerID, g_playerTextDraws[playerID][E_PTD_SCREENFADER], 0, 50);
    PlayerTextDrawUseBox(playerID, g_playerTextDraws[playerID][E_PTD_SCREENFADER], true);

    // Show pos
    g_playerTextDraws[playerID][E_PTD_SHOWPOS] = CreatePlayerTextDraw(playerID, 10, 150, " ");
    PlayerTextDrawTextSize(playerID, g_playerTextDraws[playerID][E_PTD_SHOWPOS], 150, 0);
    PlayerTextDrawFont(playerID, g_playerTextDraws[playerID][E_PTD_SHOWPOS], 1);
    PlayerTextDrawLetterSize(playerID, g_playerTextDraws[playerID][E_PTD_SHOWPOS], 0.4, 0.8);
    PlayerTextDrawUseBox(playerID, g_playerTextDraws[playerID][E_PTD_SHOWPOS], true);
    PlayerTextDrawBoxColor(playerID, g_playerTextDraws[playerID][E_PTD_SHOWPOS], 0x00000066);

    // Vehicle shop control info
    g_playerTextDraws[playerID][E_PTD_VEHICLESHOP_CTRL_INFO] = CreatePlayerTextDraw(playerID, 500, 375, " ");
    PlayerTextDrawFont(playerID, g_playerTextDraws[playerID][E_PTD_VEHICLESHOP_CTRL_INFO], 1);
    PlayerTextDrawLetterSize(playerID, g_playerTextDraws[playerID][E_PTD_VEHICLESHOP_CTRL_INFO], 0.4, 0.8);
    PlayerTextDrawUseBox(playerID, g_playerTextDraws[playerID][E_PTD_VEHICLESHOP_CTRL_INFO], true);
    PlayerTextDrawBoxColor(playerID, g_playerTextDraws[playerID][E_PTD_VEHICLESHOP_CTRL_INFO], 0x00000066);

    // Vehicle shop vehicle info
    g_playerTextDraws[playerID][E_PTD_VEHICLESHOP_VEHICLE_INFO] = CreatePlayerTextDraw(playerID, 320, 425, " ");
    PlayerTextDrawAlignment(playerID, g_playerTextDraws[playerID][E_PTD_VEHICLESHOP_VEHICLE_INFO], 2);
    PlayerTextDrawFont(playerID, g_playerTextDraws[playerID][E_PTD_VEHICLESHOP_VEHICLE_INFO], 1);
    PlayerTextDrawLetterSize(playerID, g_playerTextDraws[playerID][E_PTD_VEHICLESHOP_VEHICLE_INFO], 0.4, 0.8);
    PlayerTextDrawUseBox(playerID, g_playerTextDraws[playerID][E_PTD_VEHICLESHOP_VEHICLE_INFO], true);
    PlayerTextDrawBoxColor(playerID, g_playerTextDraws[playerID][E_PTD_VEHICLESHOP_VEHICLE_INFO], 0x00000066);

    // Digital speedometer unit
    g_playerTextDraws[playerID][E_PTD_SPEEDOMETER_UNIT] = CreatePlayerTextDraw(playerID, SPEEDOMETER_DIGITAL_UNIT_POSX, SPEEDOMETER_DIGITAL_UNIT_POSY, "km/h");
    PlayerTextDrawAlignment(playerID, g_playerTextDraws[playerID][E_PTD_SPEEDOMETER_UNIT], 2);
    PlayerTextDrawFont(playerID, g_playerTextDraws[playerID][E_PTD_SPEEDOMETER_UNIT], 1);
    PlayerTextDrawLetterSize(playerID, g_playerTextDraws[playerID][E_PTD_SPEEDOMETER_UNIT], 0.4, 0.8);
    PlayerTextDrawSetShadow(playerID, g_playerTextDraws[playerID][E_PTD_SPEEDOMETER_UNIT], 0);
    PlayerTextDrawBackgroundColor(playerID, g_playerTextDraws[playerID][E_PTD_SPEEDOMETER_UNIT], 0x000000ff);
    PlayerTextDrawSetOutline(playerID, g_playerTextDraws[playerID][E_PTD_SPEEDOMETER_UNIT], 1);

    // Digital speedometer value
    g_playerTextDraws[playerID][E_PTD_SPEEDOMETER_VALUE] = CreatePlayerTextDraw(playerID, SPEEDOMETER_DIGITAL_VALUE_POSX, SPEEDOMETER_DIGITAL_VALUE_POSY, " ");
    PlayerTextDrawAlignment(playerID, g_playerTextDraws[playerID][E_PTD_SPEEDOMETER_VALUE], 2);
    PlayerTextDrawFont(playerID, g_playerTextDraws[playerID][E_PTD_SPEEDOMETER_VALUE], 1);
    PlayerTextDrawLetterSize(playerID, g_playerTextDraws[playerID][E_PTD_SPEEDOMETER_VALUE], 0.6, 1.0);
    PlayerTextDrawSetShadow(playerID, g_playerTextDraws[playerID][E_PTD_SPEEDOMETER_VALUE], 0);
    PlayerTextDrawBackgroundColor(playerID, g_playerTextDraws[playerID][E_PTD_SPEEDOMETER_VALUE], 0x000000ff);
    PlayerTextDrawSetOutline(playerID, g_playerTextDraws[playerID][E_PTD_SPEEDOMETER_VALUE], 1);

    // TextDraw configuration for numbers of analog speedometer
    new speedometerNumbers[][] =
    {
        {-25, 20, 3},// 20
        {-30, 10, 3},// 40
        {-35, 0, 3},// 60
        {-30, -10, 3},// 80
        {-25, -20, 3},// 100
        {-15, -30, 3},// 120
        {0, -35, 2},// 140
        {15, -30, 1},// 160
        {25, -20, 1},// 180
        {30, -10, 1},// 200
        {35, 0, 1},// 220
        {30, 10, 1},// 240
        {25, 20, 1}// 260
    };

    // Analog speedometer
    Foreach(speedometerNumberIndex, speedometerNumbers)
    {
        g_playerTextDraws[playerID][E_PTD_SPEEDOMETER][speedometerNumberIndex] = CreatePlayerTextDraw(playerID, floatadd(SPEEDOMETER_ANALOG_POSX, speedometerNumbers[speedometerNumberIndex][0]), floatadd(SPEEDOMETER_ANALOG_POSY, speedometerNumbers[speedometerNumberIndex][1]), " ");
        PlayerTextDrawAlignment(playerID, g_playerTextDraws[playerID][E_PTD_SPEEDOMETER][speedometerNumberIndex], speedometerNumbers[speedometerNumberIndex][2]);
        PlayerTextDrawFont(playerID, g_playerTextDraws[playerID][E_PTD_SPEEDOMETER][speedometerNumberIndex], 1);
        PlayerTextDrawLetterSize(playerID, g_playerTextDraws[playerID][E_PTD_SPEEDOMETER][speedometerNumberIndex], 0.4, 0.8);
        PlayerTextDrawSetShadow(playerID, g_playerTextDraws[playerID][E_PTD_SPEEDOMETER][speedometerNumberIndex], 0);
        PlayerTextDrawBackgroundColor(playerID, g_playerTextDraws[playerID][E_PTD_SPEEDOMETER][speedometerNumberIndex], 0x000000ff);
        PlayerTextDrawSetOutline(playerID, g_playerTextDraws[playerID][E_PTD_SPEEDOMETER][speedometerNumberIndex], 1);
    }

    g_playerTextDraws[playerID][E_PTD_VEHICLE_HEALTH_BOX1] = CreatePlayerTextDraw(playerID, SPEEDOMETER_HEALTHBAR_POSX, SPEEDOMETER_HEALTHBAR_POSY, "_");
    PlayerTextDrawUseBox(playerID, g_playerTextDraws[playerID][E_PTD_VEHICLE_HEALTH_BOX1], true);
    PlayerTextDrawTextSize(playerID, g_playerTextDraws[playerID][E_PTD_VEHICLE_HEALTH_BOX1], SPEEDOMETER_HEALTHBAR_POSX + SPEEDOMETER_HEALTHBAR_LENGTH + 2.0, 0.0);
    PlayerTextDrawLetterSize(playerID, g_playerTextDraws[playerID][E_PTD_VEHICLE_HEALTH_BOX1], 1.0, 0.5);
    PlayerTextDrawBoxColor(playerID, g_playerTextDraws[playerID][E_PTD_VEHICLE_HEALTH_BOX1], 0x000000ff);

    g_playerTextDraws[playerID][E_PTD_VEHICLE_HEALTH_BOX2] = CreatePlayerTextDraw(playerID, SPEEDOMETER_HEALTHBAR_POSX + 1.2, SPEEDOMETER_HEALTHBAR_POSY + 2.15, "_");
    PlayerTextDrawUseBox(playerID, g_playerTextDraws[playerID][E_PTD_VEHICLE_HEALTH_BOX2], true);
    PlayerTextDrawTextSize(playerID, g_playerTextDraws[playerID][E_PTD_VEHICLE_HEALTH_BOX2], SPEEDOMETER_HEALTHBAR_POSX + SPEEDOMETER_HEALTHBAR_LENGTH, 0.0);
    PlayerTextDrawLetterSize(playerID, g_playerTextDraws[playerID][E_PTD_VEHICLE_HEALTH_BOX2], 1.0, 0.5 - 0.35);

    g_playerTextDraws[playerID][E_PTD_VEHICLE_HEALTH_VALUE] = CreatePlayerTextDraw(playerID, SPEEDOMETER_HEALTHBAR_POSX + 1.0, SPEEDOMETER_HEALTHBAR_POSY + 2.15, "_");
    PlayerTextDrawUseBox(playerID, g_playerTextDraws[playerID][E_PTD_VEHICLE_HEALTH_VALUE], true);
    PlayerTextDrawLetterSize(playerID, g_playerTextDraws[playerID][E_PTD_VEHICLE_HEALTH_VALUE], 1.0, 0.5 - 0.35);

    UpdatePlayerTextDrawStrings(playerID);
}