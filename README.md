# NeoPixelBusCustomSpeed Addon

Расширение для библиотеки [NeoPixelBus](https://github.com/Makuna/NeoPixelBus), добавляющее поддержку нестандартных скоростей передачи данных для светодиодных лент на ESP8266 через DMA.

## Возможности

- Поддержка скоростей:
  - **900 кбит/с** (бит: 1111 нс)
  - **1000 кбит/с (1 Мбит/с)** (бит: 1000 нс)
  - **1200 кбит/с** (бит: 833 нс)
- Использование DMA-метода для точной генерации сигнала
- Полная совместимость с API NeoPixelBus

## Установка

1. Скачайте файл `NeoPixelBusCustomSpeed.h`
2. Поместите его в папку с вашим проектом Arduino/PlatformIO
3. Убедитесь, что библиотека NeoPixelBus установлена

## Зависимости

NeoPixelBus (версия 2.6.0 или выше)

## Использование

### Базовый пример

```cpp
#include <NeoPixelBus.h>
#include "NeoPixelBusCustomSpeed.h"

const uint16_t PixelCount = 60;
const uint8_t PixelPin = 3;  // GPIO3 на ESP8266

// 900 кбит/с
NeoPixelBus<NeoGrbFeature, NeoEsp8266Dma900KbpsMethod> strip(PixelCount, PixelPin);
// 1000 кбит/с
// NeoPixelBus<NeoGrbFeature, NeoEsp8266Dma1000KbpsMethod> strip(PixelCount, PixelPin);
// 1200 кбит/с
// NeoPixelBus<NeoGrbFeature, NeoEsp8266Dma1200KbpsMethod> strip(PixelCount, PixelPin);

void setup() {
    strip.Begin();
    strip.Show();
}

void loop() {
    // Ваш код
}
