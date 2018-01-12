public class Node<K,V> {
    private Node<K,V> parent;
    private Node<K,V> left;
    private Node<K,V> right;
    private K key;
    private V value;

    public Node(K key, V value) {
        this.key = key;
        this.value = value;
    }

    public set_key_value(K key, V value) {
        this.key = key;
        this.value = value;
    }
}