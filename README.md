# Node MCU

## Contenido
- En la carpeta BL_Serial se tiene un código para escribir desde la terminal de una applicación con funcionalidad BT Serial y se muestra en el System Monitor del IDE el mensaje recibido por el NodeMCU

- En la carpeta BL_ESP32 hay un código que utiliza BLE para establecer una comunicación bidireccional con una terminal.

- Este README

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

### 4. Descargar la aplicación nRF Connect de Nordic Semiconductor

- Tiene bastante información que puede ser de utilidad para el debugging de la aplicación

### 5. Subir el código
- Seleccionar NodeMCU-32S como la tarjeta a utilizar en la pestaña de Tools
- Para subir el código se necesita tener la tarjeta conectada, mientras se sube se debe presionar el botón "boot"
- Abrir la ventana de comunicación Serial.
- Activar el bluetooth en el teléfono e iniciar la comunicación en la aplicación, no se necesita parear desde la configuración del teléfono
- En la pantalla se verá lo que se mande al NodeMCU.

### 6. Uso

- Una vez que el código está arriba, la ventana de comunicación serial del IDE abierta, el BT activado y la aplicación abierta, procedemos a conectar.
- En la aplicación en la sección de Scan se debe escanear y encontrar el dispositivo, darle conectar e ir a la pestaña del dispositivo. En la IDE debe aparecer que se conectó desde la App.
- En la parte de "Client" se tiene un servicio llamado "Nordic UART Service", darle tap para que se desplieguen las características del servicio.
- Verificar que el descriptor en TX Characteristic tenga las notificaciones activadas, si no, hacer tap en el ícono de tres flechas apuntando hacia abajo
- En la característica de RX Characteristic hacer click en la flecha apuntando hacia arriba y enviar un mensaje.
- Al hacer swipe right en la aplicación debe aparecer la ventana de información, donde se encuentran los detalles de la comunicación, debe aparecer el mensaje enviado.
- El dispositivo al recibir un mensaje regresa un ACK que dice "Received: xxxx" donde xxxx es el mensaje enviado.
