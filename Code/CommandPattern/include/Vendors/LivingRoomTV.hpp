#pragma once

class LivingRoomTV {
public:
    LivingRoomTV();
    void on();
    void off();
    void setInputChannel(int id);
    void setVolume(int vol);
};