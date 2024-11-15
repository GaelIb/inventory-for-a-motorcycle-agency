#incldue "Compra.h"

Compra::Compra(string_fecha, float_total, Cliente cliente,Moto item){
	Fecha=_fecha;
	Total=_total;
	Cliente=Cliente;
	item=item;
}

string Compra::getFecha(){
	return Fecha;
}

string Compra::getTotal(){
	return Total;
}

string Compra::getCliente(){
	return cliente;
}

string Compra::getitem(){
	return item;
}



string COmpra::getCompraData(){
    string CompraData = "Fecha: "+ Fecha + "\nCliente: " + Cliente  + 
    "\nTotal: " + Total + "\nItem: " + item ;
    return CompraData;
}
