%include "io.inc"

section .data
    formato db "La suma es de los valores del vector es: %f", 10,13,0
    resul dq 0
    puntero dd 3.5,0.1,1.5,0.6
    contador dd 4
section .text
global CMAIN
extern printf
CMAIN:
     xor edx, edx
    xor ecx, ecx
    
    MOV edx , puntero ; Copio puntero de  *Array a edx 
    MOV ecx , [ contador ] ; Copio Contador  
    
    jcxz resultado
    fld dword [edx]     ; cargo el numero float lo que hay en edx
    dec ecx

    ciclo:
    jcxz resultado
    add edx,4           ;muevo el puntero al siguiente numero
    fld dword [edx]      ;cargo el siguiente numero del array
    fadd
    dec ecx
    jmp ciclo
    
      
    resultado:
    fstp qword [resul]
    push dword[resul+4]
    push dword[resul] 
    push formato
    call printf
    add esp, 12

    ret