package org.starrier.codecombat.leetcode;

/**
 * @author Starrier
 * @date 2019/3/12.
 * <p>
 * Description :
 */
public class CombineTwoTables {
    public static void main(String[] args) {
        System.out.println("SELECT Person.FirstName,Person.LastName,Address.City,Address.State \n" +
                "FROM Person,Address \n" +
                "WHERE Person.PersonId=Address.PersonId");
        System.out.println("select FirstName, LastName, City, State from Person left join Address on Person.PersonId=Address.PersonId");
    }
}
