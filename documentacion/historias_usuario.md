# Registro de entrenamientos para atletas
    


## Introducción
El presente proyecto tiene como finalidad el desarrollo de un sistema de gestión de entrenamientos para atletas, diseñado específicamente para el club deportivo “Fuerza Total”. El sistema busca facilitar el registro y seguimiento de las rutinas de entrenamiento semanales de los atletas, así como el control de su progreso individual. Esta herramienta contribuye a una planificación estructurada y una evaluación constante del desempeño de cada deportista, optimizando el trabajo del entrenador y promoviendo la mejora continua.

### Descripción general del sistema
El sistema es una aplicación desarrollada en lenguaje C++, que permite a los usuarios (entrenadores o encargados del club) realizar las siguientes funciones:

Registrar la rutina principal de un atleta, incluyendo tipo de ejercicio, días por semana y duración diaria.

Consultar los datos de la rutina almacenada.

Actualizar semanalmente el progreso del atleta, registrando observaciones y el porcentaje de mejora.

Visualizar el historial completo de progreso por semana.

### Objetivo General
Desarrollar una aplicaciónpara el club deportivo “Fuerza Total” que permita registrar las rutinas de entrenamiento de los atletas y llevar un seguimiento semanal de su progreso, contribuyendo a una mejor organización y evaluación del rendimiento físico.

### Objetivos específicos
Objetivo 1: Registrar rutinas de entrenamiento
Objetivo 2: Mostrar la rutina actual del atleta
Objetivo 3: Registrar y mostrar el progreso semanal del atleta
## HISTORIAS DE USUARIO OBJETIVO ESPECÍFICO 1
HU-01:Como entrenador, quiero registrar el nombre del atleta, para que el sistema identifique a quién pertenece la rutina.
Positivo: El sistema guarda correctamente el nombre ingresado.
Negativo: Si el nombre se deja vacío, el sistema debe mostrar un mensaje de error y no continuar
HU-02:Como entrenador, quiero registrar el ejercicio principal del atleta, para personalizar su plan de entrenamiento.
Positivo: El sistema guarda el nombre del ejercicio ingresado.
Negativo: Si no se ingresa texto, el sistema debe advertir que el campo no puede quedar vacío.
HU-03:Como entrenador, quiero registrar cuántos días a la semana entrena el atleta, para asegurarme de que su carga sea adecuada.
Positivo: El sistema acepta valores válidos entre 1 y 7.
Negativo: Si se ingresa un número fuera del rango, debe mostrar un mensaje de error.
HU-04:Como entrenador, quiero registrar cuántos minutos entrena por día, para controlar la intensidad del entrenamiento.
Positivo: El sistema guarda correctamente la duración si es mayor que 0.
Negativo: Si se ingresa un número negativo o cero, debe rechazar el dato.
HU-05:Como atleta, quiero ver un mensaje de confirmación al registrar mi rutina, para saber que se guardó correctamente.
Positivo: Al finalizar el registro, el sistema muestra un mensaje de éxito.
Negativo: Si hay un fallo en el ingreso de datos, no debe mostrar el mensaje de éxito.
HU-06:Como entrenador, quiero que el sistema evite mostrar información si no se ha registrado aún una rutina, para evitar errores en la consulta.
Positivo: Si no hay rutina registrada, el sistema muestra un mensaje informando la ausencia.
Negativo: No debe mostrar datos por defecto o basura si no hay datos ingresados.
## HISTORIAS DE USUARIO OBJETIVO ESPECÍFICO 2
HU-07:Como entrenador, quiero poder ver la rutina registrada del atleta, para revisarla antes de actualizarla o evaluarla.
Positivo: El sistema muestra correctamente todos los datos registrados.
Negativo: Si no existe rutina, no debe permitir esta opción o debe notificarlo.
HU-08:Como atleta, quiero consultar mi rutina actual en cualquier momento, para seguir el plan establecido.
Positivo: El menú permite consultar los datos cuando ya se han registrado.
Negativo: Si el usuario consulta antes de registrar, debe mostrar una advertencia
HU-09:Como entrenador, quiero que se muestre claramente el nombre, el ejercicio, los días y la duración, para tener la rutina completa de un vistazo.
Positivo: Todos los campos se visualizan en un formato claro.
Negativo: No debe faltar ningún dato ni mostrarse mal etiquetado
HU-10:Como entrenador, quiero que el sistema indique si no hay rutina registrada, para no mostrar información vacía o errónea.
Positivo: Se muestra un mensaje del tipo “No hay rutina registrada aún”.
Negativo: El sistema no debe intentar mostrar valores nulos o vacíos
HU-11:Como atleta, quiero saber qué ejercicio es mi prioridad cada semana, para enfocarme en él durante mi entrenamiento.
Positivo: El ejercicio principal se muestra de forma destacada.
Negativo: Si no se ingresa este campo, debe impedir continuar el registro
HU-12:Como entrenador, quiero asegurarme de que cada atleta tenga una sola rutina activa, para evitar confusiones al mostrar los datos.
Positivo: El sistema sobrescribe la rutina anterior con la nueva.
Negativo: No debe crear múltiples rutinas simultáneamente
## HISTORIAS DE USUARIO OBJETIVO ESPECÍFICO 3
HU-13:Como entrenador, quiero poder registrar el progreso semanal de un atleta, para llevar un seguimiento continuo de su evolución.
Positivo: El sistema guarda correctamente cada nueva entrada de progreso.
Negativo: No debe permitir registrar progreso si no hay rutina
HU-14:Como entrenador, quiero agregar observaciones a cada semana, para documentar comentarios relevantes o cambios en la rutina.
Positivo: Las observaciones se registran y se pueden consultar.
Negativo: Si el campo se deja en blanco, se debe solicitar completarlo
HU-15:Como entrenador, quiero registrar el porcentaje de mejora del atleta, para cuantificar su progreso físico.
Positivo: Se acepta un porcentaje válido y se almacena.
Negativo: Si el porcentaje es negativo o no numérico, debe rechazarlo
HU-16:Como atleta, quiero ver un historial de mis mejoras semanales, para motivarme y ver cuánto he avanzado.
Positivo: El historial muestra todas las semanas registradas con su mejora.
Negativo: Si no hay datos, el sistema debe indicarlo con claridad
HU-17:Como entrenador, quiero registrar el número de semana para cada entrada, para organizar cronológicamente el historial.
Positivo: Cada progreso tiene asignado su número de semana.
Negativo: No debe permitir semanas duplicadas si ya existen
HU-18:Como entrenador, quiero evitar registrar progreso si no hay una rutina existente, para mantener la consistencia de los datos.
Positivo: El sistema verifica que haya rutina antes de permitir agregar progreso.
Negativo: Si no hay rutina registrada, debe mostrar un mensaje de advertencia
