import java.util.NoSuchElementException;

public class ListaEnlazada<E> {
	private NodeLE<E> head, tail;
	private int size;

	public ListaEnlazada() {
		// Iniciar valuees default
		this.head = this.tail = null;
		this.size = 0;
	}

	/**
	 * @param data, array containing values to insert
	 */
	public ListaEnlazada(E[] data) {
		for(E value: data){
			insertEnd(value);
		}
	}
	/**
	 * @return value from the head node
	 * @throws NoSuchElementException if the head is null
	 */
	public E start() throws NoSuchElementException {
		try {
			return this.head.value;

		} catch (NullPointerException e) {
			throw new NoSuchElementException("No hay ningun dato al inicio");
		}

	}

	/**
	 * @return value from the tail node
	 * @throws NoSuchElementException if the tail is null
	 */
	public E end() throws NoSuchElementException {
		try {
			return this.tail.value;
		} catch (NullPointerException e) {
			throw new NoSuchElementException("No hay ningun dato al inicio");
		}
	}

	public int size() {
		return this.size;
	}

	public boolean isEmpty() {
		return this.size == 0;
	}

	public void insertStart(E value) {
		this.head = new NodeLE<E>(value, this.head);
		if(this.size == 0){
			this.tail = this.head;
		}
		this.size++;
	}

	public void insertEnd(E value) {
		NodeLE<E> newNode = new NodeLE<E>(value, null); 
		if (this.size >= 1) {
			this.tail.next = newNode;
			this.tail = this.tail.next;
		}
		else{
			this.head = newNode;
			this.tail = this.head;
		}
		this.size++;
	}

	public void insertarEn(E value, int pos) {
		if (pos >= 0 && pos <= this.size) {
			NodeLE<E> anterior = this.head;
			for (int i = 0; i != pos; i++) {
				anterior = anterior.next;
			}
			anterior.next = new NodeLE<>(value, anterior.next);

			this.size++;
		} else {
			throw new NoSuchElementException("");
		}
	}

	public E deleteStart() throws NoSuchElementException {
		try {
			E value = start();
			this.head = this.size > 1 ? this.head.next:null;
			this.size--;
			return value;
		} catch (NullPointerException e) {
			throw new NoSuchElementException("No se puede borrar porque no existe ningun elemento");
		}
	}

	public E deleteEnd() throws NoSuchElementException {
		try {
			E value = end();
			if (this.size > 1) {
				NodeLE<E> current = this.head;
				while(current.next.next != null){
					current = current.next;
				}
				current.next = null;
				this.tail = current;

			} else {
				this.head = this.tail = null;
			}
			this.size--;
			return value;

		} catch (NullPointerException e) {
			throw new NoSuchElementException("");
		}
	}


	// TODO MEJORAR
	public void borrarEn(int pos) throws NoSuchElementException {
		if (pos >= 0 && pos <= this.size) {
			NodeLE<E> current = this.head;
			for (int i = 0; i != pos - 1; i++) {
				current = current.next;
			}
			NodeLE<E> aux = current.next;
			current.next = aux.next;
			this.size--;
		} else {
			throw new NoSuchElementException("");
		}
	}

	// TODO MEJORAR
	public void setAt(E value, int pos) {
		if (pos >= 0 && pos <= this.size) {
			NodeLE<E> current = this.head;
			for (int i = 0; i != pos; i++) {
				current = current.next;
			}
			current.value = value;
		} else {
			throw new IndexOutOfBoundsException("");
		}
	}

	public String toString() {
		String s = "";
		NodeLE<E> current = this.head;
		while(current != null){
			s += current.value +" -> ";
			current = current.next;
		}
		return s;
	}

	public NodeLE<E> middleNode(NodeLE<E> head){
		if(head==null|| head.next==null){
			return head;
		}
		NodeLE<E> slow=head;
		NodeLE<E> fast =head;
		while(fast!=null&& fast.next!=null){
			fast=fast.next.next;
			slow=slow.next;
	}
   
	return slow;
	}
	public static void main(String[] args) {
		ListaEnlazada le = new ListaEnlazada<>();
		int[] valores = {1,2,3,4,5};
		for(int x: valores){ le.insertEnd(x);}
	}

	/**
	 * Clase Nodo
	 * @param <E> Puede recibir cualquier tipo de dato
	 */
	class NodeLE<T> {
		E value;
		NodeLE<E> next;

		public NodeLE(E value) {
			this(value, null);
		}

		public NodeLE(E value, NodeLE<E> next) {
			this.value = value;
			this.next = next;
		}
		public String toString(){
			return this.value.toString();
		}
	}

}
