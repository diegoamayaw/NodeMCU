# Node MCU


## Set up

### 1.Instalar Arduino IDE con version >= 1.8.9

### 2.Agregar ESP32  Boards Manager

- En el IDE de Arduino: File -> Preferences -> Settings y en "Additional boards manager URL:" poner:

    ```
    https://dl.espressif.com/dl/package_esp32_index.json
    ```

    En Tools -> Board: -> Boards Manager busca ESP32 en la ventana e instalar la de Espressif.

### 3.Dependencies
- No se necesitan dependencias particulares aparte de las ya instaladas.

## 4. Descargar cualquier aplicación de terminal bluetooth

## 5. Subir el código

- Para subir el código se necesita tener la tarjeta conectada, mientras se sube se debe presionar el botón "boot"
- Abrir la ventana de comunicación Serial.
- Emparejar el dispositivo con nombre "ESP32_BT_Control" e iniciar la comunicación en la aplicación
- En la pantalla se verá lo que se mande al NodeMCU.
