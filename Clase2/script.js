function agregarTarea() {
    // Obtén el valor del campo de texto con id "task"
    var taskText = document.getElementById("task").value;

    // Obtén el valor del campo de fecha con id "taskDate"
    var taskDate = document.getElementById("taskDate").value;

    // Obtén el valor del campo de hora con id "taskTime"
    var taskTime = document.getElementById("taskTime").value;

    // Comprueba si los campos de texto, fecha y hora no están vacíos
    if (taskText !== "" && taskDate !== "" && taskTime !== "") {
        // Crea un nuevo elemento de lista (li) para representar la tarea
        var listItem = document.createElement("li");
        
        // Asigna la clase "task" al elemento de lista (puede usarse para aplicar estilos)
        listItem.className = "task";
        
        // Define el contenido HTML del elemento de lista
        listItem.innerHTML = `
            <input type="text" value="${taskText}" readonly>
            <input type="date" value="${taskDate}" readonly>
            <input type="time" value="${taskTime}" readonly>
            <button class="delete">Eliminar</button>
        `;

        // Agrega el elemento de lista recién creado al elemento con id "todo-list" en la página
        document.getElementById("todo-list").appendChild(listItem);
        
        // Agregar funcionalidad para eliminar tareas
        // Busca el botón de clase "delete" dentro del elemento de lista
        var deleteButton = listItem.querySelector(".delete");

        // Agrega un controlador de eventos al botón "Eliminar"
        // Cuando se hace clic en el botón, se elimina el elemento de lista
        deleteButton.addEventListener("click", function () {
            listItem.remove();
        });
        /*
        
        Primero, se selecciona el botón de "Eliminar" dentro del elemento de lista actual (listItem). 
        Esto se hace utilizando el método querySelector. La clase "delete" se asigna a los botones "Eliminar" cuando se crean.
        Luego, se agrega un controlador de eventos al botón "Eliminar". 
        El evento que se escucha es el evento "click". 
        Esto significa que cuando el usuario hace clic en el botón "Eliminar", se ejecutará la función anónima asociada. 
        La función anónima que se ejecuta cuando se hace clic en el botón "Eliminar"
         es muy simple. Ejecuta listItem.remove(). listItem es el elemento de lista actual que representa 
         la tarea que el usuario quiere eliminar. La función remove() es una función incorporada que elimina el 
         elemento de su contenedor padre, lo que efectivamente elimina la tarea de la lista.
        

        */
        
        
        
        
    }
}



function logout() {
    // Redirige al usuario a login.html
    window.location.href = "login.html";
}
