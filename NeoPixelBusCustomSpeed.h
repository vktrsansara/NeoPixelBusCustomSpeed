// NeoPixelBusCustomSpeed.h
#ifndef NEOPIXELBUS_CUSTOM_SPEED_H
#define NEOPIXELBUS_CUSTOM_SPEED_H

#include <NeoPixelBus.h>

// ===== 900 кбит/с =====
// 1/900000 * 1e9 = 1111.11 нс
class NeoBitsSpeed900Kbps
{
public:
    static const uint32_t BitSendTimeNs = 1111;
    static const uint32_t ResetTimeUs = 300;
    
    static inline uint32_t ByteSendTimeUs(uint32_t bitTimeNs)
    {
        return (bitTimeNs * 8 + 999) / 1000;
    }
};

// ===== 1000 кбит/с (1 Мбит/с) =====
// 1/1000000 * 1e9 = 1000.0 нс
class NeoBitsSpeed1000Kbps
{
public:
    static const uint32_t BitSendTimeNs = 1000;
    static const uint32_t ResetTimeUs = 300;
    
    static inline uint32_t ByteSendTimeUs(uint32_t bitTimeNs)
    {
        return (bitTimeNs * 8 + 999) / 1000;
    }
};

// ===== 1200 кбит/с =====
// 1/1200000 * 1e9 = 833.33 нс
class NeoBitsSpeed1200Kbps
{
public:
    static const uint32_t BitSendTimeNs = 833;
    static const uint32_t ResetTimeUs = 300;
    
    static inline uint32_t ByteSendTimeUs(uint32_t bitTimeNs)
    {
        return (bitTimeNs * 8 + 999) / 1000;
    }
};

// ===== DMA МЕТОДЫ =====

// DMA метод для 900 кбит/с
typedef NeoEsp8266DmaMethodBase<NeoEsp8266I2sCadence<NeoEsp8266DmaNormalPattern>, NeoBitsSpeed900Kbps> NeoEsp8266Dma900KbpsMethod;

// DMA метод для 1000 кбит/с
typedef NeoEsp8266DmaMethodBase<NeoEsp8266I2sCadence<NeoEsp8266DmaNormalPattern>, NeoBitsSpeed1000Kbps> NeoEsp8266Dma1000KbpsMethod;

// DMA метод для 1200 кбит/с
typedef NeoEsp8266DmaMethodBase<NeoEsp8266I2sCadence<NeoEsp8266DmaNormalPattern>, NeoBitsSpeed1200Kbps> NeoEsp8266Dma1200KbpsMethod;

#endif
