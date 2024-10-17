package part_03._03_Generics._12_Wildcards;

/// 泛型的上界通配符（upper bounded wildcard）和下界通配符（lower bounded wildcard）
/// 的确是为了解决泛型在多态方面的限制而存在的。
///
/// ## 1. Java 泛型和多态的基本问题
///
/// - 在普通的类层次结构中，Java 支持多态，通过父类引用指向子类对象来处理多种不同的子类类型。
/// - 但在泛型系统中，由于类型不变性（invariance），这种多态关系无法直接应用到泛型中。
/// - 因此引入了通配符（Wildcard）来解决这个问题，提供类似于多态的灵活性。
///
/// ## 2. 上界通配符（`? extends T`）：解决子类的多态问题
///
/// - **作用**：允许使用 `T` 的子类进行泛型传递，提供了泛型中的协变性，即可以读取子类的对象。
/// - **场景**：当你只需要从泛型集合中读取元素时，使用 `? extends T` 可以让方法接受 `T` 或者 `T` 的子类的集合。
///
/// ### 示例：
/// ```java
/// public static void printNumbers(List<? extends Number> list) {
///     for (Number num : list) {
///         System.out.println(num);
///     }
/// }
///
/// List<Integer> intList = new ArrayList<>();
/// List<Double> doubleList = new ArrayList<>();
/// printNumbers(intList);  // 允许传入 List<Integer>
/// printNumbers(doubleList);  // 允许传入 List<Double>
/// ```
///
/// - **限制**：你不能往 `List<? extends Number>` 中添加元素，因为编译器无法确定具体的类型，它只知道这个元素是 `Number` 或者其子类，但不知道具体是哪一个。
///
/// ## 3. 下界通配符（`? super T`）：解决父类的多态问题
///
/// - **作用**：允许使用 `T` 的父类进行泛型传递，提供了泛型中的逆变性，即可以向集合中写入 `T` 类型的对象。
/// - **场景**：当你只需要向泛型集合中添加元素时，使用 `? super T` 可以让方法接受 `T` 或 `T` 的父类的集合。
///
/// ### 示例：
/// ```java
/// public static void addNumbers(List<? super Integer> list) {
///     list.add(1);  // 可以添加 Integer 类型
/// }
///
/// List<Number> numList = new ArrayList<>();
/// addNumbers(numList);  // 允许传入 List<Number>
/// ```
///
/// - **限制**：你只能安全地向 `List<? super Integer>` 中添加 `Integer` 或其子类，读取时则只能得到 `Object` 类型，因为泛型可以是 `Integer` 的任意父类，
///   编译器不能确定确切类型。
///
/// ## 4. 泛型列表 vs 简单泛型类
///
/// - **泛型列表**：由于 Java 的泛型列表是不变的，你不能将 `List<Integer>` 赋给 `List<Number>`，因此需要使用通配符来解决多态性问题。使用 `? extends` 可以让方法接收 `T` 的子类。
/// - **简单泛型类**：泛型类（如 `Box<T>`）的多态性已经通过 Java 的原生多态机制解决了。即使 `T` 是 `Integer` 或 `Double`，也可以通过多态与 `Number` 兼容，无需使用通配符。
///
/// ## 5. 代码对比：泛型列表和简单泛型类
///
/// ### 泛型列表：
/// ```java
/// // 泛型列表中的多态问题：
/// // 需要通配符来处理子类泛型。
///
/// List<Integer> intList = new ArrayList<>();
/// List<Double> doubleList = new ArrayList<>();
/// printNumbers(intList);  // 允许传入 List<Integer>
/// printNumbers(doubleList);  // 允许传入 List<Double>
///
/// public static void printNumbers(List<? extends Number> list) {
///     for (Number num : list) {
///         System.out.println(num);
///     }
/// }
/// ```
///
/// ### 泛型类：
/// ```java
/// // 泛型类中的多态问题：
/// // 无需通配符，直接使用多态机制处理泛型类。
///
/// Box<Integer> intBox = new Box<>(42);
/// Box<Double> doubleBox = new Box<>(3.14);
/// printBox(intBox);  // 允许传入 Box<Integer>
/// printBox(doubleBox);  // 允许传入 Box<Double>
///
/// public static void printBox(Box<Number> box) {
///     System.out.println(box.getValue());
/// }
///
/// class Box<T> {
///     private T value;
///     public Box(T value) {
///         this.value = value;
///     }
///     public T getValue() {
///         return value;
///     }
/// }
/// ```
///
/// ## 6. 对比总结
///
/// - **泛型列表**：由于**不变性**的限制，必须使用通配符来处理子类类型。
/// - **简单泛型类**：Java 的原生多态机制已经足够，通配符在这种情况下没有必要。
public class _12_Wildcards {

	public static void main(String[] args) {
		User user = new Instructor(10);
		Utils.printUser(new Instructor(10));

		var users = new GenericList<User>();
		Utils.printUsersExtends(users);

		var instructors = new GenericList<Instructor>();
		Utils.printUsersExtends(instructors);
	}

}
