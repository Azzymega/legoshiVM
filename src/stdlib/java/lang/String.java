/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */

package java.lang;

public class String {
	public byte[] data;
	public int length;
	public String(byte[] a){
		data = a;
		length = a.length;
	}
	public byte at(int place){
		return data[place];
	}
}