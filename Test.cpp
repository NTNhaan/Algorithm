#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void chen(float *&a, int &n, int k, int s)
{
    float *newA = new float[n + 1];
    for (int i = 0; i < k; i++)
    {
        newA[i] = a[i];
    }
    newA[k] = s;
    for (int i = k; i < n; i++)
    {
        newA[i + 1] = a[i];
    }
    delete[] a;
    a = newA;
    n++;
}
void sortNegative(float *a, int n)
{
    // Tạo một vector để chứa các số âm
    vector<float> negatives;

    // Lưu các số âm vào vector
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            negatives.push_back(a[i]);
        }
    }

    // Sắp xếp vector chứa các số âm
    sort(negatives.begin(), negatives.end());

    // Thay thế các số âm trong mảng gốc bằng các số trong vector đã sắp xếp
    int negIndex = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            a[i] = negatives[negIndex++];
        }
    }
}
int main()
{
    int n;
    cout << "nhap so luong phan tu:";
    cin >> n;
    float *a = new float[n];
    cout << "nhap cac phan tu cua mang :";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // int k, s;
    // cout << "nhap vi tri k : ";
    // cin >> k;
    // cout << "nhap gia tri can them";
    // cin >> s;
    // chen(a, n, k, s);
    // cout << "mang sau khi them phan tu la : ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << "  ";
    // }
    // cout << endl;
    sortNegative(a, n);
    cout << "mang sau khi sap xep cac so am tang dan la : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
    delete[] a;
    return 0;
}

private
Spinner spinnerAlbums;
private
ListView listViewSongs;
private
TextView textViewAlbumName;
private
TextView textViewSongName;
private
TextView textViewReleaseDate;
private
Button buttonAddSong;

private
ArrayList<Song> currentSongs;
private
ArrayAdapter<Song> songAdapter;

spinnerAlbums = findViewById(R.id.spinnerAlbums);
listViewSongs = findViewById(R.id.listViewSongs);
textViewAlbumName = findViewById(R.id.textViewAlbumName);
textViewSongName = findViewById(R.id.textViewSongName);
textViewReleaseDate = findViewById(R.id.textViewReleaseDate);
buttonAddSong = findViewById(R.id.buttonAddSong);

// Spinner Adapter
ArrayAdapter<String> albumAdapter = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item, new ArrayList<>(albumData.keySet()));
albumAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
spinnerAlbums.setAdapter(albumAdapter);

// ListView Adapter
currentSongs = albumData.get("Album 1"); // Default Album
songAdapter = new ArrayAdapter<>(this, android.R.layout.simple_list_item_1, currentSongs);
listViewSongs.setAdapter(songAdapter);
registerForContextMenu(listViewSongs);

// Spinner Listener
spinnerAlbums.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() {
            @Override
            public void onItemSelected(AdapterView<?> parent, View view, int position, long id)
            {
                String selectedAlbum = (String)parent.getItemAtPosition(position);
                textViewAlbumName.setText(selectedAlbum);
                currentSongs.clear();
                currentSongs.addAll(albumData.get(selectedAlbum));
                songAdapter.notifyDataSetChanged();
            }

            @Override
            public void onNothingSelected(AdapterView<?> parent)
            {
            }
});

// ListView Click Listener
listViewSongs.setOnItemClickListener((parent, view, position, id)->{
    Song selectedSong = currentSongs.get(position);
    textViewSongName.setText(selectedSong.getName());
    textViewReleaseDate.setText(selectedSong.getReleaseDate());
});

// Add Song Button
buttonAddSong.setOnClickListener(v->{
    Intent intent = new Intent(MainActivity.this, AddSongActivity.class);
    startActivityForResult(intent, 1);
});

void onActivityResult(int requestCode, int resultCode, Intent data)
{
    super.onActivityResult(requestCode, resultCode, data);
    if (requestCode == 1 && resultCode == RESULT_OK)
    {
        String albumName = data.getStringExtra("albumName");
        String songName = data.getStringExtra("songName");
        String releaseDate = data.getStringExtra("releaseDate");

        Song newSong = new Song(songName, releaseDate);
        albumData.get(albumName).add(newSong);

        if (textViewAlbumName.getText().toString().equals(albumName))
        {
            currentSongs.add(newSong);
            songAdapter.notifyDataSetChanged();
        }
    }
}

// Context Menu
@Override public void onCreateContextMenu(ContextMenu menu, View v, ContextMenu.ContextMenuInfo menuInfo)
{
    super.onCreateContextMenu(menu, v, menuInfo);
    if (v.getId() == R.id.listViewSongs)
    {
        menu.setHeaderTitle("Options");
        menu.add(0, 1, 0, "Add");
        menu.add(0, 2, 0, "Edit");
        menu.add(0, 3, 0, "Delete");
    }
}
public
boolean onContextItemSelected(@NonNull MenuItem item)
{
    AdapterView.AdapterContextMenuInfo info = (AdapterView.AdapterContextMenuInfo)item.getMenuInfo();
    int position = info.position;

    switch (item.getItemId())
    {
    case 1: // Add
        buttonAddSong.performClick();
        return true;

    case 2: // Edit
        Toast.makeText(this, "Edit song not implemented", Toast.LENGTH_SHORT).show();
        return true;

    case 3: // Delete
        currentSongs.remove(position);
        songAdapter.notifyDataSetChanged();
        return true;

    default:
        return super.onContextItemSelected(item);
    }
}

public
class AddSongActivity extends AppCompatActivity
{

private
    Spinner spinnerAlbums;
private
    EditText editTextSongName;
private
    EditText editTextReleaseDate;
private
    Button buttonSave;

    @Override protected void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_add_song);

        spinnerAlbums = findViewById(R.id.spinnerAlbums);
        editTextSongName = findViewById(R.id.editTextSongName);
        editTextReleaseDate = findViewById(R.id.editTextReleaseDate);
        buttonSave = findViewById(R.id.buttonSave);

        // Populate Spinner
        ArrayList<String> albumList = new ArrayList<>();
        albumList.add("Album 1");
        albumList.add("Album 2");
        ArrayAdapter<String> albumAdapter = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item, albumList);
        albumAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        spinnerAlbums.setAdapter(albumAdapter);

        // Save Button
        buttonSave.setOnClickListener(v->{
            Intent resultIntent = new Intent();
            resultIntent.putExtra("albumName", spinnerAlbums.getSelectedItem().toString());
            resultIntent.putExtra("songName", editTextSongName.getText().toString());
            resultIntent.putExtra("releaseDate", editTextReleaseDate.getText().toString());
            setResult(RESULT_OK, resultIntent);
            finish();
        });
    }
}