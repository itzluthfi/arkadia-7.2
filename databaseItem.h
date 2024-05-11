#include <iostream>
using namespace std;

//sistem Rarity
string Rarity[]        = {"[Mythical]","[Legendary]","[Epic]","[Rare]","[Common]"};
float dropRateWeapon[] = {0.01,0.10,0.15,0.25,0.35};
string skillEffectWeapon[] = {"+20% Crit Damage And Give Status [Dominated]", "+10% Crit Damage Give Status [Cursed]", "+5% Crit Damage And Give Status [Bleeding]", "-none-", "-none-" };

string weaponFighter[] = {"Divine Punisher Sword", "Doombringers GreatSword", "Cursed War Axes", "Crimson Katana", "Assault Dagger"};
string detailWeaponFighter[] = {"Legenda mengatakan bahwa Dewa Pencipta sendiri menciptakan senjata ini, \n untuk menghadapi kekacauan yang muncul dari salah satu penciptaannya yang menyimpang.",
                                "Pedang besar ini diyakini berasal dari jantung neraka itu sendiri,\nDitempa oleh tukang besi yang menjalin perjanjian gelap, setiap goresan pada pedang ini memanggil roh-roh gelap yang haus akan kehancuran.",
                                "Kapak Yang Terbuat Dari Ribuan Pengorbanan Dan Kebencian.",
                                "Api Yang Di Gunakan Untuk Menempanya Adalah Api Sang Naga Merah",
                                "Senjata Yang Digunakan Oleh Sang Assasin Terkenal."};
int dmgWeaponFighter[] = {150, 90, 75, 35, 20};

string weaponWizzard[] = {"Malevolent Enchantress Crown","Sanguine Astral Liontin" , "The Cloak Of Abyss","Enigma Blood Staff", "Frost Grimoire"};
string detailWeaponWizard[] = { "Mahkota Sang Penyihir Surgawi Yang menolak aturan surgawi dan, sebagai akibatnya, Mahkota ini Mengandung kutukan dan tanda pemberontakannya.",
                                "Seorang penjelajah roh menceritakan bahwa liontin ini ditemukan di Astral Realm, dimana energi kosmik dan kekuatan metafisika menyatu.",
                                "Seseorang melakukan pertukaran dengan penjaga gerbang neraka, memberikan jiwa mereka sebagai ganti untuk mendapatkan kekuatan yang terkandung dalam mantel ini.",
                                "Tongkat misterius yang terkutuk,\nMampu mengeluarkan sihir-sihir yang sulit dipahami oleh manusia biasa.",
                                "Buku berlapis es dan api, berisi pengetahuan mistik tentang sihir es dan api,\nDikatakan mampu mengendalikan elemen dingin dan panas."};
int dmgWeaponWizzard[] = {150, 90, 75, 35, 20};

string weaponRanger[]  = {"The Mad God Bow", "Cursed Wraithlord's Bow", "Dragonheart Composite Bow", "Venomous Fang's Bow", "Hunter's Longbow"};
string detailWeaponRanger[] = {"Busur bermata pisau yang diyakini berasal dari ketika dunia berada di ambang kehancuran,\nKatanya, roh malaikat jatuh terperangkap di dalamnya, memberikan kekuatan yang luar biasa.",
                                "Busur berkekuatan mistik yang diberikan oleh roh Wraithlord,\nPanah-panahnya dikatakan membawa kutukan yang tak terhindarkan.",
                                "Busur komposit yang terbuat dari jantung naga Terkutuk,\nMemberikan kekuatan dan ketahanan yang luar biasa.",
                                "Busur presisi dengan panah Beracun,\nDibuat oleh pemburu legendaris untuk melawan musuh-musuh yang sulit dijangkau.",
                                "Busur panjang yang dikenal dengan ketepatannya,\nDigunakan oleh para pemburu ulung untuk menyerang dari jauh."};
int dmgWeaponRanger[]  = {150, 90, 75, 35, 20};

//string weaponPlayer = "-tidak ada senjata-";
float randomRateNumber;
float jmlDropRate = sizeof(dropRateWeapon) / sizeof(dropRateWeapon[0]);

