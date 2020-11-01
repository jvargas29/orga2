section .data
    formato db "la suma es : %f", 10,13,0

    valorA dd 0.0
    valorB dd 0.0
    valorC dd 0.0
    valor4 dd 4
    valor2 dd 2
    valor1 dd 1
    numeroB dd 0
    numeroBCuadrado dd 0
    mult4AC dd 0
    bCuadradoMenos4AC dd 0
    resultRaiz dd 0
    BNegativoMasResultRaiz dd 0 
    BNegativoMenosResultRaiz dd 0
    result2A dd 0
    X1 dd 0
    X2 dd 0
    total dw 0
    contador dd 0
    resul dq 0
section .text
global CMAIN
extern printf
CMAIN:
    mov ebp, esp; for correct debugging
        
    push ebp ;enter 0,0
   mov ebp, esp; enter 0,0
    
     xor eax, eax
     xor ebx,ebx
    xor ecx, ecx
    xor edx,edx
    
    MOV eax , [ EBP + 8 ] ; Copio el valor de a
    MOV ebx , [ EBP + 12 ] ; Copio el valor de b
    mov ecx, [EBP + 16]     ;Copio el valor de c
    
    mov [valorA],eax
    mov [valorB],ebx
    mov [valorC],ecx
   
    
    fldz                    ;convierto valor de B en negativo y lo guardo en numeroB
    fld dword[valorB]
    fsub
    fstp dword[numeroB]
    
    fld dword[valorB]       ;multiplico valor de B por si mismo y lo guardo en numeroBCuadrado
    fld dword[valorB]
    fmul
    fstp dword[numeroBCuadrado]
    
    fild dword[valor4]       ;convierto valor de B en negativo y lo guardo en numeroB
    fld dword[valorA]
    fld dword[valorC]
    fmul
    fmul
    fstp dword[mult4AC]
    
    fld dword[numeroBCuadrado]   ;cargo B al cuadrado y el resultado de 4AC y los resto
    fld dword[mult4AC]          
    fsub
    fstp dword[bCuadradoMenos4AC]
    
    fld dword[bCuadradoMenos4AC]        ;luego aplico raiz cuadrada y lo guardo en resultRaiz
    fsqrt  
    fstp dword[resultRaiz]       

    
    fld dword[numeroB]              ; sumo el negativo de B con el resultado de la raiz cuadrada
    fld dword[resultRaiz]
    fadd   
    fstp dword[BNegativoMasResultRaiz]
    
    fld dword[numeroB]                  ; resto el negativo de B con el resultado de la raiz cuadrada
    fld dword[resultRaiz]
    fsub
    fstp dword[BNegativoMenosResultRaiz]
    
    fild dword[valor2]                  ; resto el negativo de B con el resultado de la raiz cuadrada
    fld dword[valorA]
    fmul
    fstp dword[result2A]
    
    
    fld dword[BNegativoMasResultRaiz]   ; divido BNegativoMasResultRaiz con el resultado de 2*A
    fld dword[result2A]
    fdiv
    fstp qword[X1]
    
    push dword[X1+4]
    push dword[X1]
    push formato
    call printf
    add esp, 12
    
    
    fld dword[BNegativoMenosResultRaiz]   ; divido BNegativoMemosResultRaiz con el resultado de 2*A
    fld dword[result2A]
    fdiv
    fstp qword[X2]
    push dword[X2+4]
    push dword[X2]
    push formato
    call printf
    add esp, 12   
                
    mov ebp,esp ;leave
    pop ebp        ;leave
   ret