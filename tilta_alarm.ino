const  int  sigPin  =  7 ;  // номер контакта переключателя наклона 
const  int  ledPin  =  9 ;  // номер светодиодного вывода 
// переменные будут меняться: 
boolean  sigState  =  0 ;  // переменная для чтения состояния переключателя наклона 
void  setup ( ) 
{ 
  // инициализирует светодиодный вывод в качестве выхода: 
  pinMode ( ledPin ,  OUTPUT ) ;  
  // инициализируйте вывод переключателя наклона в качестве входа: 
  pinMode ( sigPin ,  INPUT) ;  
} 
void  loop ( ) 
{ 
  // считывает состояние значения переключателя наклона: 
  sigState  =  digitalRead ( sigPin ) ; 
  if  ( sigState  ==  HIGH ) 
  {  
    // включить светодиод на: 
    digitalWrite ( ledPin ,  LOW ) ;  
  }  
  else 
  { 
    // выключить светодиод: 
    digitalWrite ( ledPin ,  HIGH ) ;  
  } 
}
