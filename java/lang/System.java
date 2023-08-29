package java.lang;

public class System {
	public static byte[] native_calls_output_buffer;
	public static byte[] native_calls_input_buffer;
	private static String native_func_name;
	private static String native_lib_name;
	public static void out(String outter) {
		byte[] data = new byte[outter.length];
		for (int i = 0; i < outter.length; i++){
			data[i] = outter.at(i);
		}
		NativeCall("jdirect","out",data);
	}
    public static byte[] NativeCall(String libname, String libfunc_name, byte[] data) {
		native_func_name = libfunc_name;
		native_lib_name = libname;
		native_calls_input_buffer = data;
		return native_calls_output_buffer;
    }
}