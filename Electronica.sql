SELECT * FROM electronica.producto;
select * from electronica.marca;
insert into electronica.marca(id_marca,marca)
values(1,'LINDY');
insert into electronica.marca(id_marca,marca)
values(2,'LENOVO');
insert into electronica.marca(id_marca,marca)
values(3,'HP');
insert into electronica.marca(id_marca,marca)
values(4,'RNC');
insert into electronica.producto(producto,id_marca,descripcion,precio_costo,precio_venta,existencia,fecha_ingreso)
values('pulsera antestatica','1','evita choques electricos','85.00','150.00','50','2021/06/13');
update electronica.producto set producto = 'Pulsera antiestatica'
where id_producto = 1;
insert into electronica.producto(producto,id_marca,descripcion,precio_costo,precio_venta,existencia,fecha_ingreso)
values('Bateria computadora','2','funcionamiento de la computadora','125.00','250.00','30','2021/04/25');

