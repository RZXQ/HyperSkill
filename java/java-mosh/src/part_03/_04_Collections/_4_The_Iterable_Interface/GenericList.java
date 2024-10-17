package part_03._04_Collections._4_The_Iterable_Interface;

import java.util.Iterator;

public class GenericList<T> implements Iterable<T> {

	private T[] list = (T[]) new Object[10];

	private int count;

	public void add(T item) {
		list[count++] = item;
	}

	public T get(int index) {
		return list[index];
	}

	@Override
	public Iterator iterator() {
		return null;
	}

}
