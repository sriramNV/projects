import java.util.Scanner;

class Bin2Dec {

    static boolean validate(String bin) {
        if (bin.length() <= 8) {
            for (int i = 0; i < bin.length(); i++) {
                if (bin.charAt(i) != '1') {
                    if (bin.charAt(i) != '0') {
                        return false;
                    }
                }
            }
            return true;
        }
        return false;
    }

    static int bin2Dec(String bin) {
        int last = 0;
        int dec = 0;
        int base = 1;
        int temp = Integer.parseInt(bin);

        while (temp != 0) {
            last = temp % 10;
            temp /= 10;
            dec += base * last;
            base *= 2;
        }

        return dec;
    }

    public static void main(String args[]) {

        System.out.println("Enter a binary number of 8 bits: ");
        Scanner scan = new Scanner(System.in);
        String bin = new String();
        bin = scan.nextLine();
        scan.close();

        if (validate(bin)) {
            System.out.println("The decimal value is: " + bin2Dec(bin));
        } else
            System.out.println("Plese enter 8bit binary only");
    }
}