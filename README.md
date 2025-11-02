# 🎮 Proyecto: Guerra de los Mil Días

## 🧭 Descripción general
Este videojuego está inspirado en la **Guerra de los Mil Días**, un conflicto civil colombiano ocurrido entre 1899 y 1902.  
El jugador asume el papel de un joven liberal que busca evitar más derramamiento de sangre, cumpliendo misiones que pondrán a prueba su sigilo, ingenio y valentía.  
A lo largo de tres niveles, deberá infiltrarse entre enemigos para entregar mensajes secretos, cruzar ríos en plena tormenta y liderar la batalla final por la libertad.  

Cada etapa introduce nuevas perspectivas, retos físicos y estrategias, ofreciendo una experiencia que combina acción, supervivencia y reflexión sobre las consecuencias de la guerra.

---

## 🗺️ Niveles del juego

### 🕊️ Nivel 1: *El Mensajero del Campamento*
**Contexto:**  
En medio del fragor de la guerra, los liberales se refugian en campamentos improvisados entre las montañas.  
El jugador encarna a un joven mensajero que debe moverse sigilosamente entre patrullas conservadoras para entregar un mensaje crucial.  

**Entorno visual y jugabilidad:**  
Vista **cenital fija**. El jugador esquiva enemigos y obstáculos mientras evita proyectiles con movimiento parabólico.  

**Reto principal:**  
Entregar el mensaje antes de que el tiempo se agote sin ser visto ni atrapado.  
Precisión, lectura de patrones y gestión del tiempo son clave para superar el nivel.

---

### 🌊 Nivel 2: *El Cruce del Río*
**Contexto:**  
Tras completar la primera misión, el joven debe cruzar un río desbordado por la tormenta para llevar suministros a un grupo aliado.  
El entorno hostil se convierte en el enemigo principal.  

**Entorno visual y jugabilidad:**  
Vista **lateral fija**. El jugador controla una **balsa de madera** que debe mantener el equilibrio mientras evita troncos, rocas y remolinos.  
Las **físicas oscilatorias** simulan el vaivén del agua.  

**Reto principal:**  
Cruzar el río con todos los suministros intactos.  
La concentración y el control del equilibrio son esenciales para sobrevivir.

---

### ⚔️ Nivel 3: *La Batalla Final*
**Contexto:**  
El joven mensajero llega al frente del último gran enfrentamiento entre liberales y conservadores.  
Ahora debe liderar un pequeño grupo en una batalla decisiva por la libertad.  

**Entorno visual y jugabilidad:**  
Vista **cenital con desplazamiento (scroll)**.  
El jugador dirige a su escuadrón, usando estrategia y precisión para vencer.  
Las **físicas lineales con aceleración** incrementan la intensidad de los combates.  

**Reto principal:**  
Derrotar al comandante enemigo y tomar el territorio.  
Cada decisión afecta al grupo, exigiendo táctica y liderazgo.

---

## 🤖 Autómata de comportamiento enemigo

**Descripción general:**  
El juego implementará un **autómata de comportamiento** que otorga inteligencia básica a ciertos enemigos, permitiendo que reaccionen y aprendan durante la partida.  
Este sistema combina cuatro etapas: **Percepción, Razonamiento, Acción y Aprendizaje**, dando la sensación de que los enemigos “piensan por sí mismos”.

**Estructura del autómata:**  
Se basa en una **Máquina de Estados Finita (FSM)** con los estados:
- Patrullar  
- Detectar  
- Atacar  
- Esconderse  
- Recuperar  

Cada enemigo cuenta con:
- **Percepción:** Detecta al jugador cuando entra en su campo visual o rango de ataque.  
- **Razonamiento:** Decide si atacar, esconderse o buscar cobertura según la situación.  
- **Acción:** Ejecuta el comportamiento elegido (disparo, movimiento o repliegue) con físicas coherentes al nivel.  

**Aprendizaje:**  
Cada vez que el enemigo falla un disparo, registra la desviación y ajusta un parámetro llamado `aim_bias` mediante una **tasa de aprendizaje** (`learning_rate`).  
Con cada intento fallido, el autómata mejora ligeramente su puntería, logrando enemigos más realistas y adaptativos.  
Este proceso incluye un sistema de **olvido gradual (decay)** para evitar que se vuelvan infalibles.  

**Integración en niveles:**  
- En el **Nivel 1**, los enemigos tienen bajo aprendizaje y reacción lenta (favorece el sigilo).  
- En el **Nivel 3**, son más agresivos y precisos, simulando combatientes experimentados.  

**Objetivo:**  
Enriquecer la experiencia de juego con enemigos dinámicos que reaccionan, se adaptan y aprenden del jugador, reforzando el componente táctico e histórico del proyecto.

---

## 🧩 Estado actual del proyecto
✅ Diseño conceptual de niveles  
✅ Definición de mecánicas principales  
✅ Estructura inicial del autómata inteligente  
🛠️ En desarrollo: implementación en C++ y motor Qt  

---

## 👥 Autor
**Andrés Felipe Sierra Fernández**  
Proyecto académico inspirado en hechos históricos de Colombia.  
Desarrollado en **C++ y Qt Framework**.

---


