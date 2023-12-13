#include "perso.hpp"

Les_Personnages menuIntro() {
    /*
    SetConsoleOutputCP(CP_UTF8);
    setvbuf(stdout, nullptr, _IONBF, 0);
    MBuf buf;
    std::cout.rdbuf(&buf);
    */
    cout << "                                                               ..                                                                 " << endl;
    cout << "                                                              ....                                                                " << endl;
    cout << "                                                             .....                                                                " << endl;
    cout << "                                                            .......                                                               " << endl;
    cout << "                                                            ........                                                              " << endl;
    cout << "                                                           ...:......                                                             " << endl;
    cout << "                                                          ....  .....                                                             " << endl;
    cout << "                                                         .....  ......                                                            " << endl;
    cout << "             @@@                                         ....    ......                                       @@@ @@@@@@@@@@      " << endl;
    cout << "            @@@@@          @@@@@@     @@@@@@        @@  ....    @@%%%#:    @@@@@@    @@@@*    @         @@@@# @% @@@@    @@@      " << endl;
    cout << "            @@@@@        @@@@  @@   @@@   @@       %@@@:...    @@@ .:@:.  @@@  @@     @@@    @@@@       @@@   # @@@@       @      " << endl;
    cout << "           @@@@@@@       @@@@       @@@           @@@@@:...    @@@ :.....%@@@         @@@    @@@@@@     @@@     @@@@@             " << endl;
    cout << "          @@@@@@@@@       @@@@      %@@@@         @@ @@@..     @@@@@......@@@@        @@@    @@@@@@@@   @@@      @@@@@@           " << endl;
    cout << "          @@@  @@@@        @@@@@      @@@@@      @@@ =@@@       %@@@@-.... @@@@@@     @@@    @@@  @@@@@ @@@       @@@@@@@         " << endl;
    cout << "         @@@   @@@@@         @@@@       @@@@    @@@ -:+@@@         @@@-....  %@@@@    @@@    @@@    @@@@@@@         @@@@@@@       " << endl;
    cout << "        @@@     @@@@@    %    @@@:  %    @@@    @@@%---@@@@   @     @@@..=..   @@@    @@@    @@@      @@@@@           @@@@@@%     " << endl;
    cout << "        @@@      @@@@@   @@@@@@@@   @@@@@@@@  %@@ ..... @@@@  @@@@@@@@ ..%@=-%@@@     @@@    @@@@       @@@             @@@@@     " << endl;
    cout << "       @@@@@@@@@@@@@@@    @@@@@      @@@@@   +@@*......  @@@%  @@@@@    .::=++-:.    *%%%+  -%%%%+        %     %@       @@@@     " << endl;
    cout << "      @@@%        #@@@@                  .............                   ..............                         @@@     @@@@@     " << endl;
    cout << "     @@@@          @@@@@@                ............                     ............                          @@@@@@@@@@@       " << endl;
    cout << "   #@@@@            @@@@@@               ............                      ...........                             @@@@@          " << endl;
    cout << "                          ########       ..:##+##+..         #####*        ::##**#:...      *########                             " << endl;
    cout << "                         ###     *       ...##:.-#=.         ##=            .##:......       ##    ####                           " << endl;
    cout << "  ......................=###             ...##::#=..         ######         .##*##:....      ##     ###......................     " << endl;
    cout << "                         ###            .   ##:=#+:.         ##=            .##:.-           ##     ###                 %%##%     " << endl;
    cout << "                          ####   #       .. ##*.:##:.        ##*  #        ..##=  # ..       ###  ####                            " << endl;
    cout << "                             ####          -:##    -::.      ###**       ...-###**:.        ######                                " << endl;
    cout << "                                             ...      .....         .....      ...                                                " << endl;
    cout << "                                                ....          ...          .....                                                  " << endl;
    cout << "                                                   .........................                                                      " << endl;
    cout << "                                                       .................                                                          " << endl;
    cout << endl << endl;

    


    std::string choix;
    std::string Pseudo1;
    std::string Pseudo2;
    cout << "Bienvenue dans Assassin's Creed Battle" << endl;
    cout << "Assassin 1 entre ton pseudo : ";
    cin >> Pseudo1;
    cout << "Assasin 2 entre ton pseudo : ";
    cin >> Pseudo2;
    cout << " 1. Jouer \n 2. Caracteristique Gentil \n 3. Caracterisque Malveillant \n 4. Credit \n 5. Quitter\n Ton choix : " << endl;
    cin >> choix;
    if (choix == "1") {
        cout << Pseudo1 << "Choisis ton camp" << endl;
        Personnage Personnage1 = ChoisirPerso(0); // n'importe quel camp
        Personnage Personnage2;
        if (Personnage1.get_gentil() == true)
        {
            Personnage2 = ChoisirPerso(2); // choix seulement mechant
        }
        else
        {
            Personnage2 = ChoisirPerso(1); // choix seulement gentil
        }
        Les_Personnages LesPersos = Les_Personnages();
        LesPersos.Perso1 = Personnage1;
        LesPersos.Perso2 = Personnage2;
        //cout << "test" << endl;
        return LesPersos;

    }
    else if (choix == "2") {
        std::string choix1;
        cout << "Choisissez un Gentil" << std::endl << std::endl;
        cout << "1.	Altair Ibn La-Ahad " << std::endl;
        cout << "2.	Ezio Auditore " << std::endl;
        cout << "3.	Edward Kenway  " << std::endl;
        cout << "4.	Bayek de Siwa  " << std::endl;
        cout << "5.	Eivor Ami-des-loups  " << std::endl;
        cin >> choix1;
        if (choix1 == "1") {
            cout << "Altair - 100PV - 100PA" << endl;
            cout << "Apres avoir suivi le chemin de la redemption, Altair entreprit le choix de sauver tout un royaume entier de la corruption. Il a l equipement parfait d un assassin classique. " << endl;
            cout << "Attaques :" << endl;
            cout << "Lame secrete (utilisation unique) : -30 PV, -40 PA" << endl;
            cout << "Attaque l ennemi avec une lame cachee dans la manche du personnage";
            cout << "Epee d Altair : -15 PV, -10 PA" << endl;
            cout << "Attaque l ennemi avec la celebre epee d Altair" << endl;
            cout << "Dague d Altair : -10 PV, -5 PA" << endl;
            cout << "Attaque l ennemi avec la celebre dague d Altair" << endl;
            cout << "Defense :" << endl;
            cout << "Parade : -3 PV" << endl;
            cout << "Pare l attaque pour reduire les degats" << endl;
            cout << "Esquive : Annule attaque" << endl;
            cout << "esquive l attaque pour recevoir aucun degat" << endl;
            cout << "Soin (utilisation unique) : +30 PV, +20 PA" << endl;
            cout << "Prend une potion de soin" << endl << endl;
            cout << "------------------------------" << endl;
            cout << " 1. Jouer \n 2. Caracteristique Gentil \n 3. Caracterisque Malveillant \n 4. Credit \n 5. Quitter\n Ton choix : " << endl;
            cin >> choix;


        }
        else if (choix1 == "2") {
            cout << "Ezio - 100PV - 100PA" << endl;
            cout << "Issu d une famille noble italienne, il rejoignit la Confrerie des Assassins apres la violente execution de son pere et de ses freres pour echapper au meme destin. En plus de sa lame secrete et de son epee, il est aussi arme d une arbalete dotee d une excellente precision.  " << endl;
            cout << "Attaques :" << endl;
            cout << "Lame secrete (utilisation unique) : -30 PV, -40 PA" << endl;
            cout << "Attaque l ennemi avec une lame cachee dans la manche du personnage";
            cout << "Epee d Ezio : 15 PV, 10 PA " << endl;
            cout << "Attaque l ennemi avec la celebre epee d Ezio" << endl;
            cout << "Arbalete : 20 PV, 25 PA" << endl;
            cout << "Prend ces distances pour attaquer l ennemi avec son arbalete" << endl;
            cout << "Defense :" << endl;
            cout << "Parade : -3 PV" << endl;
            cout << "Pare l attaque pour reduire les degats" << endl;
            cout << "Esquive : Annule attaque" << endl;
            cout << "esquive l attaque pour recevoir aucun degat" << endl;
            cout << "Soin (utilisation unique) : +30 PV, +20 PA" << endl;
            cout << "Prend une potion de soin" << endl << endl;
            cout << "------------------------------" << endl;
            cout << " 1. Jouer \n 2. Caracteristique Gentil \n 3. Caracterisque Malveillant \n 4. Credit \n 5. Quitter\n Ton choix : " << endl;
            cin >> choix;
        }
        else if (choix1 == "3") {
            cout << "Edward - 100PV - 100PA" << endl;
            cout << "Attire par la gloire et la richesse, Edward se mit a la piraterie et a parcourir les mers et a piller les autres navires. Mais comprenant le deshonneur qu'il apportait parmi les rangs des assassins, il chercha a redorer le blason de la Confrerie des Assassins. En plus de ses armes melees, sa specialite est le quadruple pistolets qui permet de faire des degats consequents.  " << endl;
            cout << "Attaques :" << endl;
            cout << "Lame secrete (utilisation unique) : -30 PV, -40 PA" << endl;
            cout << "Attaque l ennemi avec une lame cachee dans la manche du personnage";
            cout << "Double epees : 20 PV, 25 PA" << endl;
            cout << "Edward brandit ces 2 lames et saute sur l ennemi pour l attaquer" << endl;
            cout << "Quatre pistolets (utilisation unique) : 35 PV, 40 PA" << endl;
            cout << "Grace a sa dexterite, Edward brandit ces pistolets pour infliger de lourds degats a la cible" << endl;
            cout << "Defense :" << endl;
            cout << "Parade : -6 PV" << endl;
            cout << "Pare l attaque pour reduire les degats" << endl;
            cout << "Esquive : Annule attaque" << endl;
            cout << "esquive l attaque pour recevoir aucun degat" << endl;
            cout << "Soin (utilisation unique) : +15 PV, +10 PA" << endl;
            cout << "Prend une potion de soin" << endl << endl;
            cout << "------------------------------" << endl;
            cout << " 1. Jouer \n 2. Caracteristique Gentil \n 3. Caracterisque Malveillant \n 4. Credit \n 5. Quitter\n Ton choix : " << endl;
            cin >> choix;
        }
        else if (choix1 == "4") {
            cout << "Bayek - 100PV - 100PA" << endl;
            cout << "Aux services de Cleopatre, il se chargea d'eliminer des membres de l'Ordre des Anciens dont le frere de Cleopatre est suspecte d'en faire parti. Son aigle Senu etait son fidele compagnon qui le suivi jusqu'a la mort" << endl;
            cout << "Attaques :" << endl;
            cout << "Lame secrete (utilisation unique) : -30 PV, -40 PA" << endl;
            cout << "Attaque l ennemi avec une lame cachee dans la manche du personnage";
            cout << "Oiseau Senu (1 tour sur 2) : 10 PV" << endl;
            cout << "Bayek fait appel a Senu pour infliger des degats a la cible" << endl;
            cout << "Arc : 25 PV, 15 PA" << endl;
            cout << "Prend ces distances pour attaquer l'ennemi avec son arc" << endl;
            cout << "Defense :" << endl;
            cout << "Parade : -3 PV" << endl;
            cout << "Pare l attaque pour reduire les degats" << endl;
            cout << "Sacrifice de Senu (Oiseau Senu inutilisable) : Annule attaque" << endl;
            cout << "esquive l attaque pour recevoir aucun degat" << endl;
            cout << "Soin (utilisation unique) : +20 PV, +25 PA" << endl;
            cout << "Prend une potion de soin" << endl << endl;
            cout << "------------------------------" << endl;
            cout << " 1. Jouer \n 2. Caracteristique Gentil \n 3. Caracterisque Malveillant \n 4. Credit \n 5. Quitter\n Ton choix : " << endl;
            cin >> choix;
        }
        else if (choix1 == "5") {
            cout << "Eivor - 100PV - 100PA" << endl;
            cout << "Contrairement aux autres assassins, Eivor est la reincarnation de l'Isu Odin et il cherche a detruire l'Ordre des Assassins dans le Valhalla. Il est aussi accompagne d'un oiseau, un corbeau du nom de Synin. " << endl;
            cout << "Attaques :" << endl;
            cout << "Corbeau Synin (1 tour sur 2) : 10 PV" << endl;
            cout << "Eivor fait appel a Synin pour infliger des degats a la cible";
            cout << "Lance de haches : 30 PV, 45 PA" << endl;
            cout << "Attaque l'ennemi avec des haches nordiques" << endl;
            cout << "Fleches explosives : 20 PV, 25 PA" << endl;
            cout << "Prend ces distances pour preparer une fleche explosive et la decoche sur la cible" << endl;
            cout << "Defense :" << endl;
            cout << "Parade : -6 PV" << endl;
            cout << "Pare l attaque pour reduire les degats" << endl;
            cout << "Sacrifice de Synin (Corbeau Synin inutilisable) : Annule l'attaque" << endl;
            cout << "esquive l attaque pour recevoir aucun degat" << endl;
            cout << "Soin (utilisation unique) : +10 PV, +45 PA" << endl;
            cout << "Prend une potion de soin" << endl << endl;
            cout << "------------------------------" << endl;
            cout << " 1. Jouer \n 2. Caracteristique Gentil \n 3. Caracterisque Malveillant \n 4. Credit \n 5. Quitter\n Ton choix : " << endl;
            cin >> choix;
        }
    }
    else if (choix == "3") {
        std::string choix2;
        cout << "Personnages Malvaillants :" << endl;
        cout << "1.	Vieri de Pazzi " << endl;
        cout << "2.	Uberto Alberti  " << endl;
        cout << "3.	Haytham   " << endl;
        cout << "4.	Jacob Frye   " << endl;
        cout << "5.	Fulke  " << endl;
        cin >> choix2;
        if (choix2 == "1") {
            cout << "Vieri de' Pazzi - 100PV - 100PA" << endl;
            cout << "Vieri faisait parti de l'Ordre des Templiers. C'etait aussi lui qui avait donne l'ordre d'executer toute la famille d'Ezio Auditore pour une soi-disant trahison. Sa caracteristique principale, est de donner litteralement un coup de poignard dans le dos." << endl;
            cout << "Attaques :" << endl;
            cout << "Dague : 15 PV, 10 PA" << endl;
            cout << "Vieri attaque l ennemi rapidement avec sa dague" << endl;
            cout << "Epee : 20 PV, 25 PA" << endl;
            cout << "Vieri brandit son epee et attaque l ennemi" << endl;
            cout << "Coup de poing : 10 PV, 10 PA" << endl;
            cout << "Confiant de sa force, Vieri attaque son adversaire a main nue" << endl;
            cout << "Defense : " << endl;
            cout << "Parade : -10 PV" << endl;
            cout << "Pare l attaque pour reduire les degats" << endl;
            cout << "Esquive (1 tour sur 2) : Annule attaque" << endl;
            cout << "esquive l attaque pour recevoir aucun degat" << endl;
            cout << "Soin : +20 PV, +20 PA" << endl;
            cout << "Prend une potion de soin" << endl;
            cout << "------------------------------" << endl;
            cout << " 1. Jouer \n 2. Caracteristique Gentil \n 3. Caracterisque Malveillant \n 4. Credit \n 5. Quitter\n Ton choix : " << endl;
            cin >> choix;
        }
        else if (choix2 == "2")
        {
            cout << "Uberto Alberti - 100 PV - 100 PA" << endl;
            cout << "Il fait parti de l'Ordre des Templiers. Il fut un ancien allie de la famille Auditore jusqu'au moment de sa trahison. Avec sa corpulence imposante, il peut frapper ses ennemis a coups de marteau." << endl;
            cout << "Marteau : 35 PV, 45 PA" << endl;
            cout << "Uberto utilise sa force pour maitriser son marteau et inflige de lourds degats" << endl;
            cout << "Lance : 25 PV, 25 PA" << endl;
            cout << "Manie une lance pour infliger des degats tout en gardant une distance avec son adversaire" << endl;
            cout << "Coup de poing : 10 PV, 10 PA" << endl;
            cout << "Confiant de sa force, Uberto attaque son adversaire a main nue" << endl;
            cout << "Parade : -10 PV" << endl;
            cout << "Pare l attaque pour reduire les degats" << endl;
            cout << "Esquive (1 tour sur 2) : Annule attaque" << endl;
            cout << "esquive l attaque pour recevoir aucun degat" << endl;
            cout << "Soin : +20 PV, +20 PA" << endl;
            cout << "Prend une potion de soin" << endl;
            cout << "------------------------------" << endl;
            cout << " 1. Jouer \n 2. Caracteristique Gentil \n 3. Caracterisque Malveillant \n 4. Credit \n 5. Quitter\n Ton choix : " << endl;
            cin >> choix;

        }
        else if (choix2 == "3")
        {
            cout << "Haytham Kenway - 100 PV - 100 PA" << endl;
            cout << "Il est le fils d'Edward Kenway. Il fut initie a l'Ordre des Templiers de Londres a partir de la mort de son pere. Il etait responsable de nombreux massacres lors de ses differents voyages." << endl;
            cout << "Lame secrete (utilisation unique) : 30 PV, 40 PA" << endl;
            cout << "Attaque l'ennemi avec une lame cachee dans la manche du personnage" << endl;
            cout << "Epee d'Haytham : 20 PV, 25 PA" << endl;
            cout << "Haytham brandit sa celebre epee et attaque la cible" << endl;
            cout << "Pistolet a silex (1 tour sur 2) : 30 PV, 30 PA" << endl;
            cout << "Haytham prend ces distances pour tirer sur la cible" << endl;
            cout << "Parade : -10 PV" << endl;
            cout << "Pare l attaque pour reduire les degats" << endl;
            cout << "Esquive (1 tour sur 2) : Annule attaque" << endl;
            cout << "esquive l attaque pour recevoir aucun degat" << endl;
            cout << "Soin : +20 PV, +20 PA" << endl;
            cout << "Prend une potion de soin" << endl;
            cout << "------------------------------" << endl;
            cout << " 1. Jouer \n 2. Caracteristique Gentil \n 3. Caracterisque Malveillant \n 4. Credit \n 5. Quitter\n Ton choix : " << endl;
            cin >> choix;
        }
        else if (choix2 == "4")
        {
            cout << "Jacob Frye - 100 PV - 100 PA" << endl;
            cout << "Ancien Maître Assassin, il fini par se faire emporter par l’orgueil et la soif de pouvoir. Il créa son propre gang afin de contrôler des quartiers de Londres. Il cache son épée dans sa canne afin de pouvoir prendre son ennemi par surprise" << endl;
            cout << "Lame secrete (utilisation unique) : 30 PV, 40 PA" << endl;
            cout << "Attaque l'ennemi avec une lame cachee dans la manche du personnage" << endl;
            cout << "Canne epee de Jacob : 20 PV, 25 PA" << endl;
            cout << "Attaque l'ennemi avec une canne qui peut servir d'epee" << endl;
            cout << "Lance de couteaux : 25 PV, 25 PA" << endl;
            cout << "Prend ces distances pour attaquer la cible avec des couteaux" << endl;
            cout << "Parade : -10 PV" << endl;
            cout << "Pare l attaque pour reduire les degats" << endl;
            cout << "Esquive (1 tour sur 2) : Annule attaque" << endl;
            cout << "esquive l attaque pour recevoir aucun degat" << endl;
            cout << "Soin : +20 PV, +20 PA" << endl;
            cout << "Prend une potion de soin" << endl;
            cout << "------------------------------" << endl;
            cout << " 1. Jouer \n 2. Caracteristique Gentil \n 3. Caracterisque Malveillant \n 4. Credit \n 5. Quitter\n Ton choix : " << endl;
            cin >> choix;
        }
        else if (choix2 == "5")
        {
            cout << "Fulke - 100 PV - 100 PA " << endl;
            cout << "Combattante et gnostique, elle chercha de son côté d’étranges artéfacts interdits mais se fit attrapée puis emprisonnée pour hérésie. Son bouclier sert à attaquer et à se défendre." << endl;
            cout << "Hache : 15 PV, 15 PA" << endl;
            cout << "Fulke brandit sa hache et fonce sur la cible" << endl;
            cout << "Arc : 20 PV, 15 PA" << endl;
            cout << "Prend ces distances pour attaquer l'ennemi avec son arc" << endl;
            cout << "Bouclier : 10 PV, 15 PA" << endl;
            cout << "Enferme l'ennemi petit a petit dans un coin afin de lui assemer des coups de bouclier" << endl;
            cout << "Bouclier : -10 PV" << endl;
            cout << "Pare l attaque pour reduire les degats" << endl;
            cout << "Esquive (1 tour sur 2) : Annule attaque" << endl;
            cout << "esquive l attaque pour recevoir aucun degat" << endl;
            cout << "Soin : +20 PV, +20 PA" << endl;
            cout << "Prend une potion de soin" << endl;
            cout << "------------------------------" << endl;
            cout << " 1. Jouer \n 2. Caracteristique Gentil \n 3. Caracterisque Malveillant \n 4. Credit \n 5. Quitter\n Ton choix : " << endl;
            cin >> choix;
        }
    }
    else if (choix == "4") {
        cout << "Aymeric Marec \n Brendan Visine \n Sonita NOU \n Maxime Chort" << endl;
        cout << "------------------------------" << endl;
        cout << " 1. Jouer \n 2. Caracteristique Gentil \n 3. Caracterisque Malveillant \n 4. Credit \n 5. Quitter\n Ton choix : " << endl;
        cin >> choix;

    }
    else if (choix == "5") {
        cout << "         @@         " << endl;
        cout << "        @@@@        " << endl;
        cout << "        @@@@@       " << endl;
        cout << "       @@ @@@       " << endl;
        cout << "      @@@  @@@      " << endl;
        cout << "     @@@    @@@     " << endl;
        cout << "     @@     @@@@    " << endl;
        cout << "@@@@@@@      @@@@@@@" << endl;
        cout << "@@@@@@        @@@@@@" << endl;
        cout << "@@@@@          @@@@@" << endl;
        cout << " @@@@@         @@@@ " << endl;
        cout << " @@  @@@    @@@@ @@ " << endl;
        cout << "    @@@@@@@@@@@@    " << endl;
        cout << " Au revoir Assassin " << endl;
        Les_Personnages LesPersos = Les_Personnages();
        LesPersos.Perso1 = Personnage();
        LesPersos.Perso2 = Personnage();
        LesPersos.Perso1.set_HP(800);
        return LesPersos;
    }
    else {
        cout << "Mauvais choix assassin, reessaye ! ";
    }




}